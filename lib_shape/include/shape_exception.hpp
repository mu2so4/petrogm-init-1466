#ifndef SHAPE_EXCEPTION_HEADER
#define SHAPE_EXCEPTION_HEADER

#include <exception>

class ShapeException: public std::exception { };

class IllegalArgumentException: public ShapeException {
    const char *cause;
public:
    IllegalArgumentException(const char *cause);

    const char *what() const throw();
};

class IllegalStateException: public std::exception {
    const char *cause;
public:
    IllegalStateException(const char *cause);

    const char *what() const throw();
};

class ParseFailedException: public ShapeException {
    const char *cause;
public:
    ParseFailedException(const char *cause);

    const char *what() const throw();
};

class ShapeNotFoundException: public ShapeException {
    const char *shapeName;
public:
    ShapeNotFoundException(const char *shapeName);

    const char *what() const throw();
};


#endif