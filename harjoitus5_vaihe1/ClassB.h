#ifndef CLASSB_H
#define CLASSB_H

#include <string>

class ClassB {
public:
    ClassB() : info_("") {} // Default constructor
    ClassB(const std::string& info) : info_(info) {}
    std::string getInfo() const { return info_; }
    void setInfo(const std::string& newInfo) { info_ = newInfo; }
private:
    std::string info_;
};

#endif
