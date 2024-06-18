#ifndef SHAPE_FACTORY_HEADER
#define SHAPE_FACTORY_HEADER

#include "shape.hpp"
#include <map>
#include <vector>
#include <string>

class ShapeFactory {
private:
    ShapeFactory();

    //std::map<std::string, >

public:
    virtual ~ShapeFactory();

    void add();
    Shape createShape(const std::string &name, const std::vector<double> &parameters);

    static ShapeFactory instance();
};

#endif