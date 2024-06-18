#ifndef SHAPE_CREATOR_HEADER
#define SHAPE_CREATOR_HEADER

#include "shape.hpp"
#include <memory>
#include <vector>

class ShapeCreator {
public:
    virtual ~ShapeCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const = 0;
};

class CircleCreator: public ShapeCreator {
public:
    virtual ~CircleCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

class LineCreator: public ShapeCreator {
public:
    virtual ~LineCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

class PointCreator: public ShapeCreator {
public:
    virtual ~PointCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

class RectCreator: public ShapeCreator {
public:
    virtual ~RectCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

class RhombCreator: public ShapeCreator {
public:
    virtual ~RhombCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

class SquareCreator: public ShapeCreator {
public:
    virtual ~SquareCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif