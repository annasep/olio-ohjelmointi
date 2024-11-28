#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
public:
    Wheel(int s, const std::string& t);

    int getSize() const {
        return size;
    }
    const std::string& getType() const {
        return type;
    }

private:
    int size;
    std::string type;
};

#endif // WHEEL_H
