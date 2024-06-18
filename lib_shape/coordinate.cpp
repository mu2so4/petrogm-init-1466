#include "include/coordinate.hpp"

Coordinate::Coordinate(): x(0), y(0) {}

Coordinate::Coordinate(double _x, double _y) : x(_x), y(_y) {}

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
