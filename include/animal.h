#ifndef ANIMALS_H
#define ANIMALS_H

#include <string>

class Animal {
protected:
    int age = 0, // возраст животного 
    heart, // состояние жизней
    mentality_state, // состояние разума
    physical_state, // физическое состояние
    saturation_state; // состояние насыщения
    std::string name; // имя животного
    std::string type; // тип животного (например, собака, кошка и т.д.)

public:
    // Constructor
    Animal(); // Default constructor
    Animal(const std::string& name,const std::string& type);
    // Destructor   


    // Getters
    std::string getName();
    std::string getType();
    int getAge();
    int getHeart();
    int getMentalityState();
    int getPhysicalState();
    int getSaturationState();

    // Setters
    void setName(const std::string& name);
    void setType(const std::string& type);
    void setAge(int age);
    void setHeart(int heart);
    void setMentalityState(int mentality_state);
    void setPhysicalState(int physical_state);
    void setSaturationState(int saturation_state);
};


#endif // ANIMALS_H