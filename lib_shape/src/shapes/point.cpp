#include "point.hpp"
#include <fmt/core.h>

Point::Point(double x, double y):
    coordinate(x, y) {}

std::string Point::Draw() const {
    return fmt::format("point at ({}, {})", coordinate.getX(), coordinate.getY());
}

double Point::Perimeter() const {
    return 0;
}

double Point::Square() const {
    return 0;
}