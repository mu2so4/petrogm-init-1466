cmake_minimum_required(VERSION 3.25)

project(shapes_client)

set(CMAKE_CXX_STANDARD 20)
set(TARGET_NAME client)
set(SHAPE_PATH ../lib_shape)

find_package(fmt REQUIRED)


include_directories(${SHAPE_PATH}/include)
link_directories(${SHAPE_PATH}/build)


add_executable(${TARGET_NAME} main.cpp)

target_link_libraries(${TARGET_NAME} fmt::fmt)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_link_libraries(${TARGET_NAME} shape)
endif()
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    target_link_libraries(${TARGET_NAME} shape.lib)
endif()
