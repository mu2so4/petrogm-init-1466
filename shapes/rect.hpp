#ifndef RECT_HEADER
#define RECT_HEADER

#include "../shape.hpp"
#include "coordinate.hpp"

class Rect: public Shape {
private:
    Coordinate coord1;
    Coordinate coord2;
public:
    Rect(double x1, double y1, double x2, double y2);
    virtual ~Rect() = default;

    std::string &Draw() const;
    double Perimeter() const;
    double Square() const;
};

#endif