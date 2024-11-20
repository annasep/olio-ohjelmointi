#include "Car.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{

    //Luodaan älykäs osoitin vektoriin, jossa on auto-olioita
    unique_ptr<vector<Car>> carList = make_unique<vector<Car>>();

    //Lisätään autot vektoriin
        carList->push_back(Car("BMW","325",2008));
        carList->push_back(Car("Toyota","Hiace",2000));
        carList->push_back(Car("Lada","Niva",1989));

        //Katsotaan läpi autot vektorissa ja tulostetaan tiedot
        for(const Car& car : *carList) {
       car.printData(); //Tulostetaan tiedot

        }
        return 0;
}
