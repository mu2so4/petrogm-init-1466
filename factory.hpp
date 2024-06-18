#ifndef SHAPE_FACTORY_HEADER
#define SHAPE_FACTORY_HEADER

#include "shape.hpp"
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
    virtual ~ShapeFactory();

    void addCreator(const std::string &name, const std::shared_ptr<ShapeCreator> &creator);
    std::shared_ptr<Shape> createShape(const std::string &name, const std::vector<double> &parameters) const;

    static ShapeFactory instance();
};

#endif