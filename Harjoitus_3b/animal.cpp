#include "animal.h"

int main() {
    Dog* dog = new Dog();
    dog->callOut();
    delete dog;
    return 0;
}
