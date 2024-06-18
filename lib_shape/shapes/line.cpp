#include "../include/shape.hpp"
#include "../include/shape_exception.hpp"

#include <cmath>
#include <fmt/core.h>

Line::Line(double x1, double y1, double x2, double y2) {
    auto dx = x2 - x1;
    auto dy = y2 - y1;
    auto distance = std::sqrt(dx * dx + dy * dy);
    if(distance < EPSILON) {
        throw IllegalArgumentException("line: points have the same coordinates");
    }
    this->length = distance;
    a = {x1, y1};
    b = {x2, y2};
}

std::string Line::Draw() const {
    return fmt::format("line at ({}, {})",
        a.getX(), a.getY(), b.getX(), b.getY());
}

double Line::Perimeter() const {
    return length;
}

double Line::Square() const {
    return 0.0;
}
