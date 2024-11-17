#include "Car.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<vector<Car>> carList = make_unique<vector<Car>>();
        carList->push_back(Car("BMW","325",2008));
        carList->push_back(Car("Toyota","Hiace",2000));
        carList->push_back(Car("Lada","Niva",1989));

        for(const Car& car : *carList) {
       car.printData();

        }
        return 0;
}
