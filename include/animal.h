#ifndef ANIMALS_H
#define ANIMALS_H

#include <string>

class Animal {
public:
    // Constructor
    Animal(const std::string& name, int age, const std::string& species);

    // Getters
    std::string getName() const;
    int getAge() const;
    std::string getSpecies() const;

    // Setters
    void setName(const std::string& name);
    void setAge(int age);
    void setSpecies(const std::string& species);

private:
    std::string name;
    int age;
    std::string species;
};

class Dog : public Animal {
public:
    Dog(const std::string& name, int age, const std::string& breed);

    std::string getBreed() const;
    void setBreed(const std::string& breed);

private:
    std::string breed;
};

class Cat : public Animal {
public:
    Cat(const std::string& name, int age, const std::string& color);

    std::string getColor() const;
    void setColor(const std::string& color);

private:
    std::string color;
};


#endif // ANIMALS_H