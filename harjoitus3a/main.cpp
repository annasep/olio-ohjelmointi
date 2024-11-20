#include "ItalianChef.h"

int main() {
    ItalianChef chef("Anthony Bourdain");
    std::cout << "ItalianChef " << chef.getName() << " konstuktori" << std::endl;
    chef.makeSalad();
    chef.makeSoup();
    chef.makePasta();
    std::cout << "name of the Italian Chef is " << chef.getName() << std::endl;
    return 0;
}
