#include "../include/shape.hpp"
#include "../include/shape_exception.hpp"

#include <fmt/core.h>
#include <cmath>

Circle::Circle(double x, double y, double radius) {
    if(radius < EPSILON) {
        throw IllegalArgumentException("circle: radius must be positive");
    }
    center = {x, y};
    this->radius = radius;
}

std::string Circle::Draw() const {
    return fmt::format("circle at center=({}, {}), radius={}",
        center.getX(), center.getY(), radius);
}

double Circle::Perimeter() const {
    return 2 * M_PI * radius;
}

double Circle::Square() const {
    return M_PI * radius * radius;
}
