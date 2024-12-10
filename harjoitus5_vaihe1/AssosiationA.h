#ifndef ASSOCIATIONAL_H
#define ASSOCIATIONAL_H

#include "ClassB.h"

class AssosiationA {
public:
    AssosiationA(ClassB& value) : refB(value) {}
    std::string getBinfo() const;
    void setBinfo(std::string value);
    std::string getBinfo();
private:
    ClassB& refB;
};

#endif
