#ifndef PARSE_FAILED_EXCEPTION_HEADER
#define PARSE_FAILED_EXCEPTION_HEADER

#include "shape_exception.hpp"
#include <string>

class ParseFailedException: public ShapeException {
    const char *cause;
public:
    ParseFailedException(const char *cause);

    const char *what() const throw();
};

#endif