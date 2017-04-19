#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Exception.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

enum Atmosphere {
    HAPPY,
    DENSE,
    MEDIUM,
    ELTE
};

class University {
private:
    std::string name;
    double passRate;
    std::vector<std::string> facts;
    Atmosphere atmosphere;

public:
    University();

    friend std::istream& operator >> (std::istream& in, University& un);
    friend std::ostream& operator << (std::ostream& ou, University& un);
};

std::istream& operator >> (std::istream& in, University& un);
std::ostream& operator << (std::ostream& ou, University& un);

#endif // UNIVERSITY_H
