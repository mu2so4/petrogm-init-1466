#ifndef ILLEGAL_ARGUMENT_EXCEPTION_HEADER
#define ILLEGAL_ARGUMENT_EXCEPTION_HEADER

#include "shape_exception.hpp"
#include <string>

class IllegalArgumentException: public ShapeException {
    const char *cause;
public:
    IllegalArgumentException(const char *cause);

    const char *what() const throw();
};

#endif