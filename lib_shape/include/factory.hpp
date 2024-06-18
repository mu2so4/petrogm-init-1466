#ifndef SHAPE_FACTORY_HEADER
#define SHAPE_FACTORY_HEADER

#include "shape.hpp"
#include "creator.hpp"
#include <map>
#include <vector>
#include <string>
#include <memory>

class ShapeFactory {
private:
    std::map<std::string, std::shared_ptr<ShapeCreator> > creators{};

public:
    virtual ~ShapeFactory();

    void addCreator(const std::string &name, ShapeCreator *creator);
    std::shared_ptr<Shape> createShape(const std::string &name, const std::vector<double> &parameters) const;

    static ShapeFactory instance();
};

#endif