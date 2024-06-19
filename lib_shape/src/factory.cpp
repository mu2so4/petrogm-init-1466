#include "factory.hpp"
#include "exception/shape_not_found_exception.hpp"

#include <fmt/core.h>
#include <algorithm>

std::string ShapeFactory::toLower(const std::string &str) {
    std::string result(str);
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}

void ShapeFactory::addCreator(const std::string &name, ShapeCreator *creator)
{
    creators[toLower(name)] = std::shared_ptr<ShapeCreator>(creator);
}

std::shared_ptr<Shape> ShapeFactory::createShape(const std::string &name, const std::vector<double> &parameters) const {
    auto lowerName = toLower(name);
    if(!creators.contains(lowerName)) {
        auto message = fmt::format("factory: shape \"{}\" not found", name);
        throw ShapeNotFoundException(message);
    }
    auto creator = creators.at(lowerName);
    return creator->newInstance(parameters);
}
