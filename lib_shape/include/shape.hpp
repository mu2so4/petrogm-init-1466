#ifndef SHAPE_HEADER
#define SHAPE_HEADER

#include "coordinate.hpp"
#include <string>

#define EPSILON 0.000001

class Shape {
public:
    virtual ~Shape() = default;

    virtual std::string Draw() const = 0;
    virtual double Perimeter() const = 0;
    virtual double Square() const = 0;
};

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

class Point: public Shape {
private:
    Coordinate coordinate;
public:
    Point(double x, double y);
    virtual ~Point() = default;

    std::string Draw() const;
    double Perimeter() const;
    double Square() const;
};

class Rect: public Shape {
private:
    Coordinate coord1;
    Coordinate coord2;
public:
    Rect(double x1, double y1, double x2, double y2);
    virtual ~Rect() = default;

    std::string Draw() const;
    double Perimeter() const;
    double Square() const;
};

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

class Square_: public Shape {
private:
    Coordinate center;
    double length;
public:
    Square_(double x, double y, double length);
    virtual ~Square_() = default;

    std::string Draw() const;
    double Perimeter() const;
    double Square() const;
};


#endif