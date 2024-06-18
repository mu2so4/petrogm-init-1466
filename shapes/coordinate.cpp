#include "coordinate.hpp"

Coordinate::Coordinate(double x, double y):
    x(x), y(y) {}

double Coordinate::getX() const {
    return x;
}

double Coordinate::getY() const {
    return y;
}

void Coordinate::setX(double x) {
    this->x = x;
}

void Coordinate::setY(double y) {
    this->y = y;
}
