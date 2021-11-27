#include "benchmark/benchmark.h"

#include <cstring>

static void BM_Strcmp (benchmark::State& state) {
    const char *foo1 = "this is one string";
    const char *foo2 = "this is one other string";
    for (auto _ : state) {
        int result = strcmp (foo1, foo2);
    }
}

int customStrcmp (const char* a, const char* b) {
    const char *a_iter;
    const char *b_iter;

    a_iter = a;
    b_iter = b;
    while (a_iter && b_iter) {
        if (*a_iter != *b_iter) {
            return false;
        }
        a_iter++;
        b_iter++;
    }

    return true;
}

static void BM_CustomStrcmp (benchmark::State& state) {
    const char *foo1 = "this is one string";
    const char *foo2 = "this is one other string";
    for (auto _ : state) {
        int result = customStrcmp (foo1, foo2);
    }
}

BENCHMARK (BM_Strcmp);
BENCHMARK (BM_CustomStrcmp);

BENCHMARK_MAIN ();