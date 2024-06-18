#include "factory.hpp"
#include "exception/shape_not_found_exception.hpp"

#include <fmt/core.h>

void ShapeFactory::addCreator(const std::string &name, ShapeCreator *creator) {
    creators[name] = std::shared_ptr<ShapeCreator>(creator);
}

std::shared_ptr<Shape> ShapeFactory::createShape(const std::string &name, const std::vector<double> &parameters) const {
    if(!creators.contains(name)) {
        auto message = fmt::format("factory: shape \"{}\" not found", name);
        throw ShapeNotFoundException(message);
    }
    auto creator = creators.at(name);
    return creator->newInstance(parameters);
}
