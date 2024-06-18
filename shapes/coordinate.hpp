#ifndef COORDINATE_HEADER
#define COORDINATE_HEADER

class Coordinate {
private:
    double x;
    double y;

public:
    Coordinate(double x, double y);
    virtual ~Coordinate() = default;

    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
};

#endif