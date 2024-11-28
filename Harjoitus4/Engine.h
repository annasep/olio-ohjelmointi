#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {

private:
    int horsepower;
    double displacement;
    std::string name;

public:
    Engine(int hp, double disp);
    int getHorsepower() const;
    double getDisplacement() const;
    std::string getName() const;
    void setName(const std::string& newName);

};

#endif // ENGINE_H
