#ifndef ATMOSPHERE_H
#define ATMOSPHERE_H

#include <iostream>
#include "Exception.h"

enum Atmosphere {
    HAPPY,
    DENSE,
    MEDIUM,
    ELTE
};

std::istream& operator >> (std::istream& in, Atmosphere& am);
std::ostream& operator << (std::ostream& ou, Atmosphere& am);

#endif // ATMOSPHERE_H
