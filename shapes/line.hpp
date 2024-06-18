#ifndef LINE_HEADER
#define LINE_HEADER

#include "shape.hpp"
#include "coordinate.hpp"

class Line: public Shape {
private:
    Coordinate a;
    Coordinate b;
    double length;
public:
    Line(double x1, double y1, double x2, double y2);
    virtual ~Line() = default;

    std::string Draw() const;
    double Perimeter() const;
    double Square() const;
};

#endif