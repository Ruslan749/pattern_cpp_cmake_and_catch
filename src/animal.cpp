#include "animal.h"

// Реализация конструктора Animal
Animal::Animal(const std::string& name, const std::string& type) 
    : age(0), 
      heart(100), 
      mentality_state(100), 
      physical_state(100), 
      saturation_state(100)
      {
        this->name = name; // Инициализация имени животного
      }

      Animal::Animal() 
    : age(0), 
      heart(100), 
      mentality_state(100), 
      physical_state(100), 
      saturation_state(100),
      type("Unknown"), // Инициализация типа животного по умолчанию
      name("Unknown") { // Инициализация имени животного по умолчанию
        this->name = name; // Инициализация имени животного
        this->type = type; // Инициализация типа животного
      }

// Реализация методов GET
std::string Animal::getName() {
    return name; // Возвращает имя животного
}
int Animal::getAge() {
    return age; // Возвращает возраст животного
}
int Animal::getHeart() {
    return heart; // Возвращает состояние жизней животного
}
int Animal::getMentalityState() {
    return mentality_state; // Возвращает состояние разума животного
}
int Animal::getPhysicalState() {
    return physical_state; // Возвращает физическое состояние животного
}
int Animal::getSaturationState()  {
    return saturation_state; // Возвращает состояние насыщения животного
}


// Реализация методов SET
void Animal::setName(const std::string& name) {
    this->name = name; // Устанавливает имя животного
}
void Animal::setHeart(int heart) {
    this->heart = heart; // Устанавливает состояние жизней животного
}
void Animal::setMentalityState(int mentality_state) {
    this->mentality_state = mentality_state; // Устанавливает состояние разума животного
}
void Animal::setPhysicalState(int physical_state) {
    this->physical_state = physical_state; // Устанавливает физическое состояние животного
}
void Animal::setSaturationState(int saturation_state) {
    this->saturation_state = saturation_state; // Устанавливает состояние насыщения животного
}
void Animal::setAge(int age) {
    this->age = age; // Устанавливает возраст животного
}
