cmake_minimum_required(VERSION 2.8)

project(turtle)

set(SRCS 
    src/math.cpp
    src/bitmap.cpp
    src/rasterizer.cpp
    src/turtle.cpp
    src/main.cpp
)
IF(UNIX)
	add_compile_options(-std=c++11)
ENDIF(UNIX)


add_executable(turtle ${SRCS})