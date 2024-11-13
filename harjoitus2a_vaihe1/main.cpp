#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    // Luo Car-olio
    Car myCar("Toyota", "Corolla", 2023);

    // Tulosta auton tiedot
    myCar.printData();

    return 0;
}
