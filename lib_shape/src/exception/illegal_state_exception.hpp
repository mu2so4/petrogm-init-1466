#ifndef ILLEGAL_ARGUMENT_EXCEPTION_HEADER
#define ILLEGAL_ARGUMENT_EXCEPTION_HEADER

#include <string>

class IllegalStateException: public std::exception {
    const char *cause;
public:
    IllegalStateException(const char *cause);

    const char *what() const throw();
};

#endif