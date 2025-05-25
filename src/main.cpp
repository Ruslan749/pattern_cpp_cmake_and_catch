#include <iostream>
#include "animal.h"

int main() {

    Animal dog;
    std::cout << "Dog Name: " << dog.getName() << std::endl;

    Animal bulldog ("Buddy","dog");
    std::cout << "Dog Name: " << bulldog.getName() << std::endl;




    return 0;

   
}