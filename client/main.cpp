#include <iostream>
#include <fstream>
#include <fmt/core.h>

#include "factory.hpp"
#include "shape.hpp"
#include "creator.hpp"
#include "parser.hpp"
#include "shape_exception.hpp"

int main(int argc, char **argv) {
    if(argc != 2) {
        std::cerr << "Missing filename\n";
        std::cerr << fmt::format("usage: {} filename\n", argv[0]);
        return 1;
    }
    
    std::ifstream in(argv[1]);
    Parser parser(in);

    ShapeFactory factory;
    factory.addCreator("point", new PointCreator());
    factory.addCreator("rect", new RectCreator());
    factory.addCreator("circle", new CircleCreator());
    factory.addCreator("line", new LineCreator());
    factory.addCreator("rhomb", new RhombCreator());
    factory.addCreator("square", new SquareCreator());

    
    while(parser.hasNext()) {
        auto line = parser.parseNext();
        try {
            auto shape = factory.createShape(line.name, line.params);
            std::cout << shape->Draw() << ", perimeter = " << shape->Perimeter() <<
                ", square = " << shape->Square() << '\n';
        }
        catch(const ShapeException &e) {
            std::cout << "ERROR: " << e.what() << std::endl;
        }
    }

    in.close();
}