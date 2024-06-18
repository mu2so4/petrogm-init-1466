#include "point.hpp"
#include <format>

std::string Point::Draw(std::ostream &out) const {
    out << std::format("point at ({}, {})", coordinate.getX(), coordinate.getY());
}

double Point::Perimeter() const {
    return 0;
}

double Point::Square() const {
    return 0;
}