#ifndef RECT_CREATOR_HEADER
#define RECT_CREATOR_HEADER

#include "creator.hpp"

class RectCreator: public ShapeCreator {
public:
    virtual ~RectCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif