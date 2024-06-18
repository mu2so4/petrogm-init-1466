#include "illegal_argument_exception.hpp"

IllegalArgumentException::IllegalArgumentException(const char * _cause):
    cause(_cause) {}

const char *IllegalArgumentException::what() const throw(){
    return cause;
}