cmake_minimum_required(VERSION 3.25)

project(shapes_client)

set(CMAKE_CXX_STANDARD 20)

set(SHAPE_PATH ../lib_shape)

find_package(fmt REQUIRED)

include_directories(${SHAPE_PATH}/include)
link_directories(${SHAPE_PATH}/build)

add_executable(client main.cpp)

target_link_libraries(client fmt::fmt shape)