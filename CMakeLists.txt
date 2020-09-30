cmake_minimum_required(VERSION 3.15)
project(turtle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SRCS 
    src/math.cpp
    src/bitmap.cpp
    src/rasterizer.cpp
    src/turtle.cpp
    src/main.cpp)

add_executable(turtle ${SRCS})