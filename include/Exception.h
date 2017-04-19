#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>

class Exception {
private:
    std::string msg;
public:
    Exception(std::string s);

    friend std::ostream& operator << (std::ostream& ou, Exception ex);
};

#endif // EXCEPTION_H
