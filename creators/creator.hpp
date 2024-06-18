#ifndef CREATOR_HEADER
#define CREATOR_HEADER

#include "../shapes/shape.hpp"
#include <memory>
#include <vector>

class ShapeCreator {
public:
    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const = 0;
};

#endif