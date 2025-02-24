#include <catch2/catch_all.hpp>
#include "code_wors.h"
#include <array>

TEST_CASE("ScorerFunction" "[score]") {
    SECTION("should value this as worthless") {
        std::array<unsigned, 5> dice = {2, 3, 4, 6, 2};
        REQUIRE(score(dice) == 0);
    }

    SECTION("should value this triplet correctly") {
        std::array<unsigned, 5> dice = {4, 4, 4, 3, 3};
        REQUIRE(score(dice) == 400);
    }

    SECTION("should value this mixed set correctly") {
        std::array<unsigned, 5> dice = {2, 4, 4, 5, 4};
        REQUIRE(score(dice) == 450);
    }
}