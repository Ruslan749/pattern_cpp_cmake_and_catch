#include <iostream>
#include "animal.h"

int main() {


    Dog bulldog("Buddy", 3, "Bulldog");
    std::cout << "Dog Name: " << bulldog.getName() << ", Breed: " << bulldog.getBreed() << std::endl;

    Cat persian("Whiskers", 2, "White");
    std::cout << "Cat Name: " << persian.getName() << ", Color: " << persian.getColor() << std::endl;


    return 0;

   
}