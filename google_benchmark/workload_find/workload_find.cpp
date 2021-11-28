#include "benchmark/benchmark.h"

#include <mongoc/mongoc.h>

#include <cstdlib>
#include <cstring>
#include <iostream>


#define MONGO_ERROR_NOT_FOUND 26
// libmongoc uses a max client pool size of 100 by default.
// Only 100 clients can be checked out of a pool concurrently.
#define MONGOC_DEFAULT_MAX_POOL_SIZE 100

// FILTER_LENGTH is the size of the BSON filter {_id: 0 } used in the find command.
// It was determined with PyMongo:
// >>> import bson
// >>> len(bson.encode({"_id": 0}))
// 14
#define FILTER_LENGTH 14

static mongoc_client_pool_t *pool;

static void BM_WorkloadFind(benchmark::State &state)
{
    bson_error_t error;
    bson_t *filter = BCON_NEW("_id", BCON_INT32(0));


    if (state.thread_index() == 0)
    {
        mongoc_uri_t *uri;
        const char *uristr = std::getenv("MONGODB_URI");
        mongoc_client_t *clients[MONGOC_DEFAULT_MAX_POOL_SIZE];
        mongoc_collection_t *coll;
        int i;

        if (uristr)
        {
            uri = mongoc_uri_new(uristr);
        }
        else
        {
            uri = mongoc_uri_new("mongodb://localhost:27017");
        }
        pool = mongoc_client_pool_new(uri);
        mongoc_uri_destroy(uri);
        // Warm up the client pool by popping all 100 clients and running one operation.
        // This will make the benchmark more stable:
        // - Opens all application connections.
        // - Starts monitoring.
        for (i = 0; i < MONGOC_DEFAULT_MAX_POOL_SIZE; i++)
        {
            clients[i] = mongoc_client_pool_pop(pool);
            if (!clients[i]) {
                MONGOC_ERROR("unable to pop client in mongoc_client_pool_pop");
                state.SkipWithError("unable to pop client in mongoc_client_pool_pop");
            }
        }

        // Use one client to drop the db.coll collection.
        coll = mongoc_client_get_collection(clients[0], "db", "coll");
        if (!mongoc_collection_drop(coll, &error) && error.code != MONGO_ERROR_NOT_FOUND)
        {
            MONGOC_ERROR("error in mongoc_collection_drop: %s", error.message);
            state.SkipWithError("error in mongoc_collection_drop");
        }

        for (i = 0; i < MONGOC_DEFAULT_MAX_POOL_SIZE; i++)
        {
            bson_t *cmd = BCON_NEW("ping", BCON_INT32(1));

            if (!mongoc_client_command_simple(clients[i], "db", cmd, NULL /* read_prefs */, NULL /* reply */, &error))
            {
                MONGOC_ERROR("error in mongoc_client_command_simple: %s", error.message);
                state.SkipWithError("error in mongoc_client_command_simple");
            }
            mongoc_client_pool_push(pool, clients[i]);
            bson_destroy(cmd);
        }
    }

    for (auto _ : state)
    {
        mongoc_client_t *client;
        mongoc_collection_t *coll;
        mongoc_cursor_t *cursor;
        const bson_t *doc;

        client = mongoc_client_pool_pop(pool);
        if (!client)
        {
            state.SkipWithError("error popping client");
        }

        coll = mongoc_client_get_collection(client, "db", "coll");

        cursor = mongoc_collection_find_with_opts(coll, filter, NULL /* opts */, NULL /* read_prefs */);
        if (mongoc_cursor_next(cursor, &doc))
        {
            MONGOC_ERROR("unexpected document returned from mongoc_cursor_next: %s", bson_as_json(doc, NULL));
            state.SkipWithError("unexpected document returned from mongoc_cursor_next");
        }

        if (mongoc_cursor_error(cursor, &error))
        {
            MONGOC_ERROR("error in mongoc_cursor_next: %s", error.message);
            state.SkipWithError("error in mongoc_cursor_next");
        }

        mongoc_cursor_destroy(cursor);
        mongoc_collection_destroy(coll);
        mongoc_client_pool_push(pool, client);
    }

    state.SetBytesProcessed(state.iterations() * FILTER_LENGTH);

    if (state.thread_index() == 0)
    {
        mongoc_client_pool_destroy(pool);
    }
    bson_destroy(filter);
}

// Note: UseRealTime is necessary. Otherwise the time measured is CPU time.

class WorkloadFindFixture : public benchmark::Fixture {
public:
    /* BeforeLoop creates pool_, warms up all client connections, and drops db.coll.
     * May be called by any thread in the benchmark. Skips if not the main thread. */
    void BeforeLoop (benchmark::State& state) {
        bson_error_t error;
        mongoc_uri_t *uri;
        const char *uristr = std::getenv(MONGODB_URI_ENV);
        mongoc_client_t *clients[MONGOC_DEFAULT_MAX_POOL_SIZE];
        mongoc_collection_t *coll;
        int i;

        // Skip if not the main thread.
        if (state.thread_index() != 0) {
            return;
        }

        uri = uristr ? mongoc_uri_new(uristr) : mongoc_uri_new("mongodb://localhost:27017");
        pool_ = mongoc_client_pool_new(uri);
        mongoc_uri_destroy(uri);

        // Pop all clients and run one operation to open all application connections.
        for (i = 0; i < MONGOC_DEFAULT_MAX_POOL_SIZE; i++)
        {
            clients[i] = mongoc_client_pool_pop(pool_);
            if (!clients[i]) {
                MONGOC_ERROR("unable to pop client in mongoc_client_pool_pop");
                state.SkipWithError("unable to pop client in mongoc_client_pool_pop");
                return;
            }
        }

        // Use one client to drop the db.coll collection.
        coll = mongoc_client_get_collection(clients[0], "db", "coll");
        if (!mongoc_collection_drop(coll, &error) && error.code != MONGODB_ERROR_NOT_FOUND)
        {
            MONGOC_ERROR("error in mongoc_collection_drop: %s", error.message);
            state.SkipWithError("error in mongoc_collection_drop");
            return;
        }

        for (i = 0; i < MONGOC_DEFAULT_MAX_POOL_SIZE; i++)
        {
            bson_t *cmd = BCON_NEW("ping", BCON_INT32(1));

            if (!mongoc_client_command_simple(clients[i], "db", cmd, NULL /* read_prefs */, NULL /* reply */, &error))
            {
                MONGOC_ERROR("error in mongoc_client_command_simple: %s", error.message);
                state.SkipWithError("error in mongoc_client_command_simple");
            }
            mongoc_client_pool_push(pool_, clients[i]);
            bson_destroy(cmd);
        }
    }
    
    void AfterLoop (benchmark::State& state) {
        if (state.thread_index() == 0) {
            mongoc_client_pool_destroy(pool_);
        }
    }

    mongoc_client_pool_t *pool_;
};

BENCHMARK_DEFINE_F (WorkloadFindFixture, WorkloadFind) (benchmark::State& state) {
    bson_t filter = BSON_INITIALIZER;
    bson_error_t error;
    BCON_APPEND (&filter, "_id", BCON_INT32(0));

    this->BeforeLoop (state);
    for (auto _ : state) {
        mongoc_client_t *client;
        mongoc_collection_t *coll;
        mongoc_cursor_t *cursor;
        const bson_t *doc;

        client = mongoc_client_pool_pop(pool_);
        coll = mongoc_client_get_collection(client, "db", "coll");
        cursor = mongoc_collection_find_with_opts(coll, &filter, NULL /* opts */, NULL /* read_prefs */);
        if (mongoc_cursor_next(cursor, &doc)) {
            MONGOC_ERROR("unexpected document returned from mongoc_cursor_next: %s", bson_as_json(doc, NULL));
            state.SkipWithError("unexpected document returned from mongoc_cursor_next");
        }

        if (mongoc_cursor_error(cursor, &error)) {
            MONGOC_ERROR("error in mongoc_cursor_next: %s", error.message);
            state.SkipWithError("error in mongoc_cursor_next");
        }

        mongoc_cursor_destroy(cursor);
        mongoc_collection_destroy(coll);
        mongoc_client_pool_push(pool_, client);
    }
    state.counters["ops_per_sec"] = benchmark::Counter(state.iterations(), benchmark::Counter::kIsRate);
    this->AfterLoop (state);
    bson_destroy (&filter);
}

BENCHMARK_REGISTER_F (WorkloadFindFixture, WorkloadFind)->
    Unit(benchmark::TimeUnit::kMicrosecond)->
    UseRealTime()->
    ThreadRange(1, 64);
    // ->MinTime(10); - may help with stability.

int main(int argc, char** argv) {                                     
    mongoc_init ();
    benchmark::Initialize(&argc, argv);                               
    if (benchmark::ReportUnrecognizedArguments(argc, argv)) return 1; 
    benchmark::RunSpecifiedBenchmarks();                              
    benchmark::Shutdown();                                            
    mongoc_cleanup ();
    return 0;                                                           
}                 