#include "myfunktions.h"
#include <iostream>

using namespace std;

int retSum(int a, int b) {
    return a +b;

}
float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaminen 0 ei onnistu." << endl;
        return 0;
    }
    else {
        return static_cast<float> (a) / b;

    }
}
