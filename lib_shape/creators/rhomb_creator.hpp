#ifndef RHOMB_CREATOR_HEADER
#define RHOMB_CREATOR_HEADER

#include "creator.hpp"

class RhombCreator: public ShapeCreator {
public:
    virtual ~RhombCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif