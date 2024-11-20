#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& name) : Chef(name) {}
    std::string getName() const { return name; }
    void makePasta() const;
};

#endif // ITALIANCHEF_H
