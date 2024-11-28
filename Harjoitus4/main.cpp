#include <iostream>
#include "car.h"

using namespace std;


int main() {
    Car corolla("Corolla", "Toyota");
    std::cout << corolla.toString() <<std::endl;

    return 0;
}
