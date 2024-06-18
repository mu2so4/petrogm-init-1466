#ifndef SHAPE_FACTORY_HEADER
#define SHAPE_FACTORY_HEADER

#include "shapes/shape.hpp"
#include "creators/creator.hpp"
#include <map>
#include <vector>
#include <string>
#include <memory>

class ShapeFactory {
private:
    //ShapeFactory();

    std::map<std::string, std::shared_ptr<ShapeCreator> > creators{};

public:
    virtual ~ShapeFactory() = default;

    void addCreator(const std::string &name, ShapeCreator *creator);
    std::shared_ptr<Shape> createShape(const std::string &name, const std::vector<double> &parameters) const;
};

#endif