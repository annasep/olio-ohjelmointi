#ifndef CHEF_H
#define CHEF_H

#include <iostream>

class Chef {
public:
    Chef(const std::string& name);
    ~Chef();

    void makeSalad() const;
    void makeSoup() const;

protected:
    std::string name;
};

#endif // CHEF_H
