#ifndef POINT_HEADER
#define POINT_HEADER

#include "../shape.hpp"
#include "coordinate.hpp"

class Point: public Shape {
private:
    Coordinate coordinate;
public:
    Point(double x, double y);
    virtual ~Point() = default;

    std::string &Draw() const;
    double Perimeter() const;
    double Square() const;
};

#endif