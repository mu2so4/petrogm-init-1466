cmake_minimum_required(VERSION 3.25)

project(shapes)

set(CMAKE_CXX_STANDARD 20)

file(GLOB INCLUDE_SRC
     "include/*.hpp"
)

file(GLOB EXCEPTION_SRC
     "exception/*.cpp"
)

file(GLOB SHAPES_SRC
     "shapes/*.cpp"
)

file(GLOB CREATORS_SRC
     "creators/*.cpp"
)

file(GLOB PARSER_SRC
     "parser/*.cpp"
)

add_library(shape SHARED factory.cpp coordinate.cpp parser.cpp
     ${INCLUDE_SRC} ${EXCEPTION_SRC} ${SHAPES_SRC} ${CREATORS_SRC} ${PARSER_SRC})