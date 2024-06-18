#include "../include/shape.hpp"
#include "../include/shape_exception.hpp"

#include <fmt/core.h>
#include <cmath>

Rhomb::Rhomb(double x, double y, double height, double width) {
    if(height < EPSILON) {
        throw IllegalArgumentException("rhomb: height must be positive");
    }
    if(width < EPSILON) {
        throw IllegalArgumentException("rhomb: width must be positive");
    }
    center = {x, y};
    this->height = height;
    this->width = width;
}

std::string Rhomb::Draw() const {
    return fmt::format("rhomb at center = ({}, {}), height = {}, width = {}",
        center.getX(), center.getY(), height, width);
}

double Rhomb::Perimeter() const {
    double length = std::sqrt(length * length + width * width);
    return length * 2;
}

double Rhomb::Square() const {
    return height * width / 2;
}
