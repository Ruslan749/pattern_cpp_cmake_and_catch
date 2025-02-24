#include <catch2/catch_all.hpp>
#include "animal.h"

TEST_CASE("тестирование родительского класса животных", "[Animal]") {
    Animal animal("Lion", 5, "Panthera leo");

    SECTION("установка пораметров") {
        REQUIRE(animal.getName() == "Lionn");
        REQUIRE(animal.getAge() == 5);
        REQUIRE(animal.getSpecies() == "Panthera leo");
    }

    SECTION("получение параметров") {
        animal.setName("Tiger");
        animal.setAge(3);
        animal.setSpecies("Panthera tigris");

        REQUIRE(animal.getName() == "Tiger");
        REQUIRE(animal.getAge() == 3);
        REQUIRE(animal.getSpecies() == "Panthera tigris");
    }
}

TEST_CASE("тестирование класса Dog", "[Dog]") {
    Dog dog("Buddy", 4, "Golden Retriever");

    SECTION("установка параметров") {
        REQUIRE(dog.getName() == "Buddy");
        REQUIRE(dog.getAge() == 4);
        REQUIRE(dog.getSpecies() == "Dog");
        REQUIRE(dog.getBreed() == "Golden Retriever");
    }

    SECTION("получение параметров") {
        dog.setName("Max");
        dog.setAge(2);
        dog.setBreed("Labrador");

        REQUIRE(dog.getName() == "Max");
        REQUIRE(dog.getAge() == 2);
        REQUIRE(dog.getSpecies() == "Dog");
        REQUIRE(dog.getBreed() == "Labrador");
    }
}

TEST_CASE("тестирование класса Cat", "[Cat]") {
    Cat cat("Whiskers", 3, "Black");

    SECTION("установка параметров") {
        REQUIRE(cat.getName() == "Whiskers");
        REQUIRE(cat.getAge() == 3);
        REQUIRE(cat.getSpecies() == "Cat");
        REQUIRE(cat.getColor() == "Black");
    }

    SECTION("получение параметров") {
        cat.setName("Mittens");
        cat.setAge(1);
        cat.setColor("White");

        REQUIRE(cat.getName() == "Mittens");
        REQUIRE(cat.getAge() == 1);
        REQUIRE(cat.getSpecies() == "Cat");
        REQUIRE(cat.getColor() == "White");
    }
}