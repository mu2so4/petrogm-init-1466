#ifndef SHAPE_NOT_FOUND_EXCEPTION_HEADER
#define SHAPE_NOT_FOUND_EXCEPTION_HEADER

#include "shape_exception.hpp"
#include <string>

class ShapeNotFoundException: public ShapeException {
    const char *shapeName;
public:
    ShapeNotFoundException(const char *shapeName);

    const char *what() const throw();
};

#endif