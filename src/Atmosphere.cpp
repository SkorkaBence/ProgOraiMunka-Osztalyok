#include "Atmosphere.h"

std::istream& operator >> (std::istream& in, Atmosphere& am) {
    std::string atmStr;
    in >> atmStr;
    if (in.fail()) {
        throw Exception("No atmosphere found");
    } else if (atmStr == "HAPPY") {
        am = HAPPY;
    } else if (atmStr == "DENSE") {
        am = DENSE;
    } else if (atmStr == "MEDIUM") {
        am = MEDIUM;
    } else if (atmStr == "ELTE") {
        am = ELTE;
    } else {
        throw Exception("Unknown atmosphere: " + atmStr);
    }
    return in;
}
std::ostream& operator << (std::ostream& ou, Atmosphere& am) {
    switch (am) {
        case HAPPY:
            ou << "HAPPY";
            break;
        case DENSE:
            ou << "DENSE";
            break;
        case MEDIUM:
            ou << "MEDIUM";
            break;
        case ELTE:
            ou << "ELTE";
            break;
    }
    return ou;
}
