#include "animal.h"
#include <iostream>
Animal::Animal(const std::string &name, int age)
    : name(name), age(age) {}

std::string Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}


void Animal::setName(const std::string &name) {
    this->name = name;
}

void Animal::setAge(int age) {
    this->age = age;
}



// Класс Dog
Dog::Dog(const std::string& name, int age, const std::string& breed)
    : Animal(name, age), breed(breed) {}

std::string Dog::getBreed() const {
    return breed;
}

void Dog::setBreed(const std::string& breed) {
    this->breed = breed;
}


// Класс Cat
Cat::Cat(const std::string& name, int age, const std::string& color)
    : Animal(name, age), color(color) {}

std::string Cat::getColor() const {
    return color;
}

void Cat::setColor(const std::string& color) {
    this->color = color;
}