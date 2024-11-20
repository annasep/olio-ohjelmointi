#include "Chef.h"

Chef::Chef(const std::string& name) : name(name) {
    std::cout << "Chef " << name <<  " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori " << std::endl;
}

void Chef::makeSalad() const {
    std::cout << name << " makes salad" << std::endl;
}

void Chef::makeSoup() const {
    std::cout << name << " makes soup" << std::endl;
}
