#include "Exception.h"

Exception::Exception(std::string s) {
    this->msg = s;
}

std::ostream& operator << (std::ostream& ou, Exception ex) {
    ou << ex.msg;
    return ou;
}
