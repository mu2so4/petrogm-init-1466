#include "circle_creator.hpp"
#include "../shapes/circle.hpp"
#include "../exception/illegal_argument_exception.hpp"

std::shared_ptr<Shape> CircleCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 3) {
        throw IllegalArgumentException("circle creator: must have exactly 3 parameters");
    }
    return std::shared_ptr<Shape>(new Circle(params[0], params[1], params[2]));
}