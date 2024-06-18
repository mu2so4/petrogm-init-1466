cmake_minimum_required(VERSION 3.25)

project(shapes)

set(CMAKE_CXX_STANDARD 20)

file(GLOB EXCEPTION_SRC
     "exception/*.h"
     "exception/*.cpp"
)

file(GLOB SHAPES_SRC
     "shapes/*.h"
     "shapes/*.cpp"
)

file(GLOB CREATORS_SRC
     "creators/*.h"
     "creators/*.cpp"
)

file(GLOB PARSER_SRC
     "parser/*.h"
     "parser/*.cpp"
)

add_library(shape SHARED factory.hpp factory.cpp
     ${EXCEPTION_SRC} ${SHAPES_SRC} ${CREATORS_SRC} ${PARSER_SRC})