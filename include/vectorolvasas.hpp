#ifndef VECTOROLVASAS_HPP_INCLUDED
#define VECTOROLVASAS_HPP_INCLUDED

#include <iostream>
#include <vector>

template<class T>
std::istream& operator >> (std::istream& in, std::vector<T>& v) {
    int n;
    in >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        in >> v[i];
    }
    return in;
}

template<class T>
std::ostream& operator << (std::ostream& ou, std::vector<T>& v) {
    ou << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++) {
        ou << "(" << i << ") " << v[i] << std::endl;
    }
    return ou;
}

#endif // VECTOROLVASAS_HPP_INCLUDED
