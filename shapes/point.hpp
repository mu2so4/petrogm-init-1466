#ifndef POINT_HEADER
#define POINT_HEADER

#include "../shape.hpp"
#include "coordinate.hpp"

class Point: public Shape {
private:
    Coordinate coordinate;
public:
    virtual ~Point() = default;

    std::string Draw(std::ostream &out) const;
    double Perimeter() const;
    double Square() const;
};

#endif