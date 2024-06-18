#include "../include/shape_exception.hpp"

IllegalStateException::IllegalStateException(const char *cause):
    cause(cause) {}

const char *IllegalStateException::what() const throw() {
    return cause;
}
