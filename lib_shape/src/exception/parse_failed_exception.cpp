#include "parse_failed_exception.hpp"

ParseFailedException::ParseFailedException(const char *cause):
    cause(cause) {}

const char *ParseFailedException::what() const throw() {
    return cause;
}
