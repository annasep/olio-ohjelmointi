#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "ClassB.h"

class AggregationA {
public:
    AggregationA(ClassB& value) : refB(value) {}
    std::string getBinfo() const;
    void setBinfo(std::string value);
    std::string getBinfo();
private:
    ClassB& refB;
};

#endif
