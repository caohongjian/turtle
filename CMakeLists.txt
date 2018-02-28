cmake_minimum_required(VERSION 2.8)

project(turtle)

set(SRCS 
    bitmap.cpp
    rasterizer.cpp
    turtle.cpp
    main.cpp
)

add_compile_options(-std=c++11)

add_executable(turtle ${SRCS})