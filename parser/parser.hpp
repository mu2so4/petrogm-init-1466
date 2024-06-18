#include "parsed_shape.hpp"

#include <istream>

class Parser {
    std::istream &input;

public:
    Parser(std::istream &input);
    virtual ~Parser() = default;

    ParsedShape parseNext();
    bool hasNext() const;
};