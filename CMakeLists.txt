cmake_minimum_required(VERSION 2.8)

project(turtle)

set(SRCS 
	math.cpp
    bitmap.cpp
    rasterizer.cpp
    turtle.cpp
    main.cpp
)
IF(UNIX)
	add_compile_options(-std=c++11)
ENDIF(UNIX)


add_executable(turtle ${SRCS})