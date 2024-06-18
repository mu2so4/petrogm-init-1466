#ifndef SQUARE_HEADER
#define SQUARE_HEADER

#include "../shape.hpp"
#include "coordinate.hpp"

class Square_: public Shape {
private:
    Coordinate center;
    double length;
public:
    Square_(double x, double y, double length);
    virtual ~Square_() = default;

    std::string &Draw() const;
    double Perimeter() const;
    double Square() const;
};

#endif