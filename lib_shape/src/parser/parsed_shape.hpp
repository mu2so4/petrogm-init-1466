#ifndef PARSED_SHAPE_HEADER
#define PARSED_SHAPE_HEADER

#include <string>
#include <vector>

struct ParsedShape {
    std::string name;
    std::vector<double> params;

    ParsedShape(std::string &name, std::vector<double> &params):
        name(name), params(params) {}
};

#endif