cmake_minimum_required(VERSION 3.9)
project(turtle)

set(SRCS 
    bitmap.cpp
    rasterizer.cpp
    turtle.cpp
    main.cpp
)

add_executable(turtle ${SRCS})