#include "rect.hpp"
#include "../exception/illegal_argument_exception.hpp"

#include <cmath>
#include <fmt/core.h>

Rect::Rect(double x1, double y1, double x2, double y2) {
    if(std::abs(x2 - x1) < EPSILON) {
        throw IllegalArgumentException("rect: X coordinates are the same");
    }
    if(std::abs(y2 - y1) < EPSILON) {
        throw IllegalArgumentException("rect: Y coordinates are the same");
    }
    coord1 = {x1, y1};
    coord2 = {x2, y2};
}

std::string &Rect::Draw() const {
    auto result = fmt::format("square at ({}, {}), ({}, {})",
        coord1.getX(), coord1.getY(), coord2.getX(), coord2.getY());
    return result;
}

double Rect::Perimeter() const
{
    double dx = std::abs(coord1.getX() - coord2.getX());
    double dy = std::abs(coord1.getY() - coord2.getY());
    return 2 * (dx + dy);
}

double Rect::Square() const {
    double dx = std::abs(coord1.getX() - coord2.getX());
    double dy = std::abs(coord1.getY() - coord2.getY());
    return dx * dy;
}
