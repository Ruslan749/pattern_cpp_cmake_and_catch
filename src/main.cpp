#include <iostream>
#include "sum.h"
#include "animal.h"

int main() {
    // int a = 5, b = 10;
    // std::cout << "Sum: " << sum(a, b) << std::endl;  

    Animal dog("Rex", 5, "Dog");
    std::cout << "Name: " << dog.getName() << std::endl;


    Dog bulldog("Buddy", 3, "Bulldog");
    std::cout << "Dog Name: " << bulldog.getName() << ", Breed: " << bulldog.getBreed() << std::endl;

    Cat persian("Whiskers", 2, "White");
    std::cout << "Cat Name: " << persian.getName() << ", Color: " << persian.getColor() << std::endl;


    return 0;

   
}