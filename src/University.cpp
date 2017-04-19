#include "University.h"

University::University() {
    this->name = "Unknown";
    this->passRate = 0;
    this->facts.resize(0);
}

std::istream& operator >> (std::istream& in, University& un) {
    in >> un.name >> un.passRate;

    std::string str;
    getline(in, str);

    std::stringstream ss;
    ss << str;

    std::string str2;
    while (ss >> str2) {
        un.facts.push_back(str2);
    }

    return in;
}

std::ostream& operator << (std::ostream& ou, University& un) {
    ou << un.name << " " << un.passRate;
    for (int i = 0; i < un.facts.size(); i++) {
        ou << " " << un.facts[i];
    }
    return ou;
}
