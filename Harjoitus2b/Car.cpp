#include "Car.h"


Car::Car(const std::string& brand, const std::string& model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel) {}

void Car::printData() const { //Tulostetaan auton tiedot
    std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << std::endl;
}
