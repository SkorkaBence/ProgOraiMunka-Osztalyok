#include <iostream>
#include <vector>
#include <fstream>
#include "University.h"
#include "vectorolvasas.hpp"
#include "Exception.h"

int main()
{
    std::vector<University> uns;

    std::ifstream f("input.txt");
    try {
        if (f.is_open()) {
            f >> uns;
        }
        std::cout << uns;
    } catch (Exception e) {
        std::cout << e;
    }

    return 0;
}
