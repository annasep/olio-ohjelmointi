#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Luo Rectangle-olio
    Rectangle rect(5.0, 3.0);

    // Tulostaa pinta-ala ja ympärysmitta
    cout << "Suorakulmion pinta-ala: " << rect.getArea() << endl;
    cout << "Suorakulmion ympärysmitta: " << rect.getCircumference() << endl;

    // Muuta leveyttä ja korkeutta
    rect.setWidth(7.0);
    rect.setHeight(4.0);

    // Tulosta uudet arvot
    cout << "Uusi pinta-ala: " << rect.getArea() << endl;
    cout << "Uusi ympärysmitta: " << rect.getCircumference() << endl;

    // Olio tuhoutuu automaattisesti tässä

    return 0;
}
