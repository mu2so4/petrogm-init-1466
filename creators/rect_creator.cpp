#include "rect_creator.hpp"
#include "../shapes/rect.hpp"
#include "../exception/illegal_argument_exception.hpp"

std::shared_ptr<Shape> RectCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 4) {
        throw IllegalArgumentException("rect creator: must have exactly 4 parameters");
    }
    return std::shared_ptr<Shape>(new Rect(params[0], params[1], params[2], params[3]));
}