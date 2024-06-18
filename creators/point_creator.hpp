#ifndef POINT_CREATOR_HEADER
#define POINT_CREATOR_HEADER

#include "creator.hpp"

class PointCreator: public ShapeCreator {
public:
    virtual ~PointCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif