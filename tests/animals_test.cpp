#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "animal.h"

TEST_CASE("тестирование родительского класса животных", "[Animal]") {
    Animal animal("Lion", 5);
    SECTION("установка пораметров") {
        REQUIRE(animal.getName() == "Lion");
        REQUIRE(animal.getAge() == 5);
    }
    SECTION("получение параметров") {
        animal.setName("Tiger");
        animal.setAge(3);

        REQUIRE(animal.getName() == "Tiger");
        REQUIRE(animal.getAge() == 3);
    }
}

TEST_CASE("тестирование класса Dog", "[Dog]") {
    Dog dog("Buddy", 4, "Golden Retriever");

    SECTION("установка параметров") {
        REQUIRE(dog.getName() == "Buddy");
        REQUIRE(dog.getAge() == 4);
        REQUIRE(dog.getBreed() == "Golden Retriever");
    }

    SECTION("получение параметров") {
        dog.setName("Max");
        dog.setAge(2);
        dog.setBreed("Labrador");

        REQUIRE(dog.getName() == "Max");
        REQUIRE(dog.getAge() == 2);
        REQUIRE(dog.getBreed() == "Labrador");
    }
}

TEST_CASE("тестирование класса Cat", "[Cat]") {
    Cat cat("Whiskers", 3, "Black");

    SECTION("установка параметров") {
        REQUIRE(cat.getName() == "Whiskers");
        REQUIRE(cat.getAge() == 3);
        REQUIRE(cat.getColor() == "Black");
    }

    SECTION("получение параметров") {
        cat.setName("Mittens");
        cat.setAge(1);
        cat.setColor("White");

        REQUIRE(cat.getName() == "Mittens");
        REQUIRE(cat.getAge() == 1);
        REQUIRE(cat.getColor() == "White");
    }
}