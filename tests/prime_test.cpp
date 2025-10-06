#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

TEST_CASE("#prime")
{
    Factorizer f;
    REQUIRE(f.primeFactorization(0) == std::vector<int>{});
    REQUIRE(f.primeFactorization(1) == std::vector<int>{});
    REQUIRE(f.primeFactorization(24) == std::vector<int>{2, 2, 2, 3});
    REQUIRE(f.primeFactorization(100) == std::vector<int>{2, 2, 5, 5});
    REQUIRE(f.primeFactorization(2) == std::vector<int>{2});
    REQUIRE(f.primeFactorization(3) == std::vector<int>{3});
    REQUIRE(f.primeFactorization(-5) == std::vector<int>{});
    REQUIRE(f.primeFactorization(-1000) == std::vector<int>{});
    REQUIRE(f.primeFactorization(17) == std::vector<int>{17});
    REQUIRE(f.primeFactorization(67) == std::vector<int>{67});
}
