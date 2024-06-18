#include "line_creator.hpp"
#include "../shapes/line.hpp"
#include "../exception/illegal_argument_exception.hpp"

std::shared_ptr<Shape> LineCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 4) {
        throw IllegalArgumentException("line creator: must have exactly 4 parameters");
    }
    return std::shared_ptr<Shape>(new Line(params[0], params[1], params[2], params[3]));
}