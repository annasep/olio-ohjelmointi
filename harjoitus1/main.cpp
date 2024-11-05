#include "myfunktions.h"
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int summa;
    float osamaara;

    cout << "Anna ensimmainen luku";
    cin >> a;
    cout << "Anna toinen luku";
    cin >> b;

    summa = retSum(a, b);
        cout << "Lukujen " << a << " ja " << b << " summa on: " << summa << endl;
    osamaara = retDiv(a, b);
        cout << "Lukujen " << a << " ja " << b << " osamaara on: " << osamaara << endl;
    return 0;
}

