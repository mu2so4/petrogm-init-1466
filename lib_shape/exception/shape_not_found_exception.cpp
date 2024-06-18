#include "shape_not_found_exception.hpp"

ShapeNotFoundException::ShapeNotFoundException(std::string &cause):
    cause(cause) {}

const char *ShapeNotFoundException::what() const throw() {
    return cause.c_str();
}
