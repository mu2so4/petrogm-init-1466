#include "point.hpp"
#include <fmt/core.h>

Point::Point(double x, double y):
    coordinate(x, y) {}

std::string &Point::Draw() const {
    auto result = fmt::format("point at ({}, {})", coordinate.getX(), coordinate.getY());
    return result;
}

double Point::Perimeter() const {
    return 0;
}

double Point::Square() const {
    return 0;
}