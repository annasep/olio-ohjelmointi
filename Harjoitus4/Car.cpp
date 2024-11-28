#include "Car.h"

Car::Car(const std::string& m, const std::string& b) :
    model(m), brand(b),
    engine(150, 2.0),
   wheels{{17, "Kesarengas"}, {17, "Kesarengas"}, {17, "Kesarengas"}, {17, "Kesarengas"}}
{}
    std::string Car::toString() const {
        std::string info = "Auto: " + brand + " " + model + "\n";
        info += "Moottori: " + std::to_string(engine.getHorsepower()) + " hv, " + std::to_string(engine.getDisplacement()) + " l\n";

        for (int i = 0; i < 4; ++i) {
            info += "Rengas " + std::to_string(i+1) + ": " + std::to_string(wheels[i].getSize()) + " tuumaa, " + wheels[i].getType() + "\n";
        }
        return info;
    }
