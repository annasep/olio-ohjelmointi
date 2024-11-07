#include "car.h"
#include <iostream>

using namespace std;

void Car::printData() {
    cout << "Auto:" << brand << " " << model << "; vuosimalli " << yearModel << endl;

}
void Car::setBrand(std::string newBrand) {
    brand = newBrand;
}
void Car::setModel(std::string newModel) {
    model = newModel;
}
void Car::setYearModel(int newYearModel){
    yearModel = newYearModel;
}
