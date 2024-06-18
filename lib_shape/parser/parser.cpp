#include "parser.hpp"
#include "../exception/illegal_state_exception.hpp"
#include "../exception/parse_failed_exception.hpp"
#include <sstream>

Parser::Parser(std::istream &input):
    input(input) { }

ParsedShape Parser::parseNext() {
    if(!hasNext()) {
        throw IllegalStateException("Cannot invoke parser at the end of stream");
    }
    std::string line;
    std::getline(input, line, '\n');

    std::istringstream streamLine(line);
    std::string name;
    getline(streamLine, name, ' ');

    std::vector<double> params;
    double param;
    while(streamLine >> param) {
        params.push_back(param);
    }
    
    return ParsedShape(name, params);
}

bool Parser::hasNext() const
{
    return input.peek() != EOF;
}
