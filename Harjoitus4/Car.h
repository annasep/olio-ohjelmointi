#ifndef CAR_H
#define CAR_H

#include "Wheel.h"
#include "Engine.h"

class Car
{
private:
    Engine engine;
    Wheel wheels[4];
    std::string model;
    std::string brand;

public:
    Car(const
        std::string& model, const std::string& brand);
    std::string toString() const;
};

#endif //CAR_H
