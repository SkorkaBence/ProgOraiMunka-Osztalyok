#include <iostream>
#include <vector>
#include <fstream>
#include "University.h"
#include "vectorolvasas.hpp"
#include "Exception.h"

using namespace std;

int main()
{
    vector<University> uns;

    ifstream f("input.txt");
    try {
        if (f.is_open()) {
            f >> uns;
        }
        cout << uns;
    } catch (Exception e) {
        cout << e;
    }

    return 0;
}
