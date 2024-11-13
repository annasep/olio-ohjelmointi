#ifndef CAR_H
#define CAR_H

#include <string>

class Car {

public:
    Car();
    Car (std::string brand, std ::string model, int yearModel );


    void printData();
    void setBrand (const std::string brand);
    void setModel (const std::string model);
    void setYearModel (int yearModel);

private:
    std::string brand;
    std::string model;
    int yearModel;
};

#endif // CAR_H
