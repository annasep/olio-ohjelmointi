#include "AggregationA.h"

std::string AggregationA::getBinfo() {
    return refB.getInfo();
}

void AggregationA::setBinfo(std::string value) {
    refB.setInfo(value);
}
