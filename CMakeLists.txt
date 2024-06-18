cmake_minimum_required(VERSION 3.25)

project(shapes)

set(CMAKE_CXX_STANDARD 20)

add_library(point shape.hpp shapes/coordinate.hpp shapes/coordinate.cpp shapes/point.hpp shapes/point.cpp)