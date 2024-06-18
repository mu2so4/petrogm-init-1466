#include "illegal_state_exception.hpp"

IllegalStateException::IllegalStateException(const char *cause):
    cause(cause) {}

const char *IllegalStateException::what() const throw() {
    return cause;
}
