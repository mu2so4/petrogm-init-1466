#ifndef CIRCLE_CREATOR_HEADER
#define CIRCLE_CREATOR_HEADER

#include "creator.hpp"

class CircleCreator: public ShapeCreator {
public:
    virtual ~CircleCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif