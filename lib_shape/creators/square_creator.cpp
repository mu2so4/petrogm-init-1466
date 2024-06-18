#include "square_creator.hpp"
#include "../shapes/square.hpp"
#include "../exception/illegal_argument_exception.hpp"

std::shared_ptr<Shape> SquareCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 3) {
        throw IllegalArgumentException("square creator: must have exactly 3 parameters");
    }
    return std::shared_ptr<Shape>(new Square_(params[0], params[1], params[2]));
}