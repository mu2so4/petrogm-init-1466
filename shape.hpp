#ifndef SHAPE_HEADER
#define SHAPE_HEADER

#include <string>
#include <ostream>

class Shape {
public:
    virtual ~Shape() = default;

    virtual std::string Draw(std::ostream &out) const = 0;
    virtual double Perimeter() const = 0;
    virtual double Square() const = 0;
};

#endif