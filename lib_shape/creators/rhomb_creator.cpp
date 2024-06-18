#include "rhomb_creator.hpp"
#include "../shapes/rhomb.hpp"
#include "../exception/illegal_argument_exception.hpp"

std::shared_ptr<Shape> RhombCreator::newInstance(const std::vector<double> &params) const {
    if(params.size() != 4) {
        throw IllegalArgumentException("rhomb creator: must have exactly 4 parameters");
    }
    return std::shared_ptr<Shape>(new Rhomb(params[0], params[1], params[2], params[3]));
}