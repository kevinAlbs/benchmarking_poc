#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../catch.hpp"

#include <cstring>

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
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


TEST_CASE("variations on strcmp") {
BENCHMARK("Strcmp"){
    const char *foo1 = "this is one string";
    const char *foo2 = "this is one other string";
    return strcmp (foo1, foo2);
};

BENCHMARK("CustomStrcmp"){
    const char *foo1 = "this is one string";
    const char *foo2 = "this is one other string";
    return customStrcmp (foo1, foo2);
};
}