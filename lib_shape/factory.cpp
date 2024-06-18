#include "include/factory.hpp"
#include "include/shape_exception.hpp"

void ShapeFactory::addCreator(const std::string &name, ShapeCreator *creator) {
    creators[name] = std::shared_ptr<ShapeCreator>(creator);
}

std::shared_ptr<Shape> ShapeFactory::createShape(const std::string &name, const std::vector<double> &parameters) const {
    if(!creators.contains(name)) {
        throw ShapeNotFoundException(name.c_str());
    }
    auto creator = creators.at(name);
    return creator->newInstance(parameters);
}
