#include "point_creator.hpp"
#include "../shapes/point.hpp"
#include "../exception/illegal_argument_exception.hpp"

std::shared_ptr<Shape> PointCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 2) {
        throw IllegalArgumentException("point creator: must have exactly 2 parameters");
    }
    return std::shared_ptr<Shape>(new Point(params[0], params[1]));
}