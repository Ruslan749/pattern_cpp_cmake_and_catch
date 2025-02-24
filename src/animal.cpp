#include "animal.h"
#include <iostream>
Animal::Animal(const std::string &name, int age, const std::string &species) 
    : name(name), age(age), species(species) {}

std::string Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}

std::string Animal::getSpecies() const {
    return species;
}

void Animal::setName(const std::string &name) {
    this->name = name;
}

void Animal::setAge(int age) {
    this->age = age;
}

void Animal::setSpecies(const std::string &species) {
    this->species = species;
}

Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age, "Dog"), breed(breed) {}

std::string Dog::getBreed() const {
    return breed;
}

void Dog::setBreed(const std::string& breed) {
    this->breed = breed;
}

Cat::Cat(const std::string& name, int age, const std::string& color)
    : Animal(name, age, "Cat"), color(color) {}

std::string Cat::getColor() const {
    return color;
}

void Cat::setColor(const std::string& color) {
    this->color = color;
}