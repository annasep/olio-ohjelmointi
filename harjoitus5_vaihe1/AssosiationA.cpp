#include "AssosiationA.h"

std::string AssosiationA::getBinfo() {
    return refB.getInfo();
}

void AssosiationA::setBinfo(std::string value) {
    refB.setInfo(value);
}
