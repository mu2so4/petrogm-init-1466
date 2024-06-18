#include "../include/shape_exception.hpp"

#include <fmt/core.h>

ShapeNotFoundException::ShapeNotFoundException(std::string &cause):
    cause(cause) {}

const char *ShapeNotFoundException::what() const throw() {
    return cause.c_str();
}
