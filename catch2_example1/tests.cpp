#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <stdexcept>

int fac(int n) {
    if (n < 0)
        throw std::domain_error {"argument must be positive"};
    int result {1};
    for (int i = 2; i < n; ++i)
        result *= i;
    return result;
}

TEST_CASE("factorials", "[fac]") {
    REQUIRE( fac(0) == 1 );
    REQUIRE( fac(3) == 6 );
}