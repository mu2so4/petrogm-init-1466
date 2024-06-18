#ifndef CIRCLE_HEADER
#define CIRCLE_HEADER

#include "shape.hpp"
#include "coordinate.hpp"

class Circle: public Shape {
private:
    Coordinate center;
    double radius;
public:
    Circle(double x, double y, double radius);
    virtual ~Circle() = default;

    std::string Draw() const;
    double Perimeter() const;
    double Square() const;
};

#endif