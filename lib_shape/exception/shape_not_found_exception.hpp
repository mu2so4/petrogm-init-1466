#ifndef SHAPE_NOT_FOUND_EXCEPTION_HEADER
#define SHAPE_NOT_FOUND_EXCEPTION_HEADER

#include "shape_exception.hpp"
#include <string>

class ShapeNotFoundException: public ShapeException {
    std::string cause;
public:
    ShapeNotFoundException(std::string &cause);

    const char *what() const throw();
};

#endif