#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() {
}
Car::Car (string brand, string model, int yearModel) {

this->brand = brand;
this->model = model;
this->yearModel = yearModel;

}

void Car::printData() {

cout << "Auton merkki: " << brand << endl;
cout << "Auton malli: " << model << endl;
cout << "Valmistuvuosi: " << yearModel << endl;

}
