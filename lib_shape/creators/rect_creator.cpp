#include "../include/creator.hpp"
#include "../include/shape_exception.hpp"

std::shared_ptr<Shape> RectCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 4) {
        throw IllegalArgumentException("rect creator: must have exactly 4 parameters");
    }
    return std::shared_ptr<Shape>(new Rect(params[0], params[1], params[2], params[3]));
}