#include "shape_not_found_exception.hpp"

#include <fmt/core.h>

ShapeNotFoundException::ShapeNotFoundException(const char *shapeName):
    shapeName(shapeName) {}

const char *ShapeNotFoundException::what() const throw() {
    return fmt::format("factory: shape \"{}\" not found", shapeName).c_str();
}
