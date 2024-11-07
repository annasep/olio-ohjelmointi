#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rect(5.0, 3.0);

    cout << "Suorakulmion pinta-ala: " << rect.getArea() << endl;
    cout << "Suorakulmion ympärysmitta: " << rect.getCircum() << endl;

    rect.setWidth(7.0);
    rect.setHeight(4.0);

    cout << "Uuden suorakulmion pinta-ala: " << rect.getArea() << endl;
    cout << "Uuden suorakulmion ympärysmitta: " << rect.getCircum() << endl;

    return 0;
}
