#ifndef SHAPE_HEADER
#define SHAPE_HEADER

#include <string>

#define EPSILON 0.000001

class Shape {
public:
    virtual ~Shape() = default;

    virtual std::string &Draw() const = 0;
    virtual double Perimeter() const = 0;
    virtual double Square() const = 0;
};

#endif