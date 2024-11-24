#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
    virtual void callOut() = 0; // Tehdään Animal-luokasta puhtaasti virtuaalinen
};

class Dog : public Animal {
public:
    void callOut() override {
        std::cout << "Koira haukkuu!" << std::endl;
    }
};

#endif // ANIMAL_H
