#include "square.hpp"
#include "../exception/illegal_argument_exception.hpp"

#include <fmt/core.h>

Square_::Square_(double x, double y, double length) {
    if(length < EPSILON) {
        throw IllegalArgumentException("square: length must be more than 0");
    }
    center = {x, y};
    this->length = length;
}

std::string &Square_::Draw() const {
    auto result = fmt::format("square at center = ({}, {}), length = {}",
        center.getX(), center.getY(), length);
    return result;
}

double Square_::Perimeter() const {
    return length * 4;
}

double Square_::Square() const {
    return length * length;
}
