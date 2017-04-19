#include "University.h"

University::University() {
    this->name = "Unknown";
    this->passRate = 0;
    this->atmosphere = HAPPY;
    this->facts.resize(0);
}

std::istream& operator >> (std::istream& in, University& un) {
    in >> un.name >> un.passRate;

    std::string atmStr;
    in >> atmStr;
    if (in.fail()) {
        throw Exception("No atmosphere found");
    } else if (atmStr == "HAPPY") {
        un.atmosphere = HAPPY;
    } else if (atmStr == "DENSE") {
        un.atmosphere = DENSE;
    } else if (atmStr == "MEDIUM") {
        un.atmosphere = MEDIUM;
    } else if (atmStr == "ELTE") {
        un.atmosphere = ELTE;
    } else {
        throw Exception("Unknown atmosphere: " + atmStr);
    }

    std::string str;
    getline(in, str);

    std::stringstream ss;
    ss << str;

    un.facts.clear();
    std::string str2;
    while (ss >> str2) {
        un.facts.push_back(str2);
    }

    return in;
}

std::ostream& operator << (std::ostream& ou, University& un) {
    ou << un.name << " " << un.passRate << " ";
    switch (un.atmosphere) {
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
    for (int i = 0; i < un.facts.size(); i++) {
        ou << " " << un.facts[i];
    }
    return ou;
}
