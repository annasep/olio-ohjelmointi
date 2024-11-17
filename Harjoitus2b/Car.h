#ifndef CAR_H
#define CAR_H
#include <iostream>


using namespace std;

class Car
{
public:
    Car();
    Car(const std::string& brand, const std::string& model, int yearModel);
    void printData() const;

private:
    std::string brand;
    std::string model;
    int yearModel;


};

#endif // CAR_H
