#ifndef RHOMB_HEADER
#define RHOMB_HEADER

#include "shape.hpp"
#include "coordinate.hpp"

class Rhomb: public Shape {
private:
    Coordinate center;
    double height;
    double width;
public:
    Rhomb(double x, double y, double height, double width);
    virtual ~Rhomb() = default;

    std::string Draw() const;
    double Perimeter() const;
    double Square() const;
};

#endif