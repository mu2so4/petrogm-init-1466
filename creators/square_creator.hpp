#ifndef SQUARE_CREATOR_HEADER
#define SQUARE_CREATOR_HEADER

#include "creator.hpp"

class SquareCreator: public ShapeCreator {
public:
    virtual ~SquareCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif