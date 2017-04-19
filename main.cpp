#include <iostream>
#include <vector>
#include <fstream>
#include "University.h"

using namespace std;

template<class T>
istream& operator >> (istream& in, vector<T>& v) {
    int n;
    in >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        in >> v[i];
    }
    return in;
}

template<class T>
ostream& operator << (ostream& ou, vector<T>& v) {
    ou << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        ou << "(" << i << ") " << v[i] << endl;
    }
    return ou;
}

int main()
{
    vector<University> uns;

    ifstream f("input.txt");
    if (f.is_open()) {
        f >> uns;
    }
    cout << uns;

    return 0;
}
