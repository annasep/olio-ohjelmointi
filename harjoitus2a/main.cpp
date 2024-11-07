#include "car.h"

int main() {
    Car myCar;
    myCar.setBrand ("Toyota");
    myCar.setModel ("Corolla");
    myCar.setYearModel (2023);

    myCar.printData();
    return 0;
}
