#include <catch2/catch_all.hpp>
#include "sum.h"

TEST_CASE("Сложение положительных чисел", "[sum]") {
    REQUIRE(sum(1, 1) == 2);
    REQUIRE(sum(5, 7) == 12);
}

TEST_CASE("Сложение с нулём", "[sum]") {
    REQUIRE(sum(0, 0) == 0);
    REQUIRE(sum(5, 0) == 5);
}