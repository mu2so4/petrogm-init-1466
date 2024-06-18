#ifndef LINE_CREATOR_HEADER
#define LINE_CREATOR_HEADER

#include "creator.hpp"

class LineCreator: public ShapeCreator {
public:
    virtual ~LineCreator() = default;

    virtual std::shared_ptr<Shape> newInstance(const std::vector<double> &params) const;
};

#endif