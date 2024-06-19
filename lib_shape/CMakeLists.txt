cmake_minimum_required(VERSION 3.25)

project(shapes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

find_package(fmt REQUIRED)

file(GLOB EXCEPTION_SRC
     "src/exception/*.cpp"
)

file(GLOB SHAPES_SRC
     "src/shapes/*.cpp"
)

file(GLOB CREATORS_SRC
     "src/creators/*.cpp"
)

file(GLOB PARSER_SRC
     "src/parser/*.cpp"
)

add_library(shape SHARED src/factory.cpp
     ${EXCEPTION_SRC} ${SHAPES_SRC} ${CREATORS_SRC} ${PARSER_SRC})

target_link_libraries(shape PUBLIC fmt::fmt)
