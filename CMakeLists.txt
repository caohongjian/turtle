cmake_minimum_required(VERSION 3.15)
project(turtle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(3rdparty)

set(SRCS 
    src/common.h
    src/common.cpp
    src/bitmap.cpp
    src/context.h
    src/context.cpp
    src/pen.h
    src/pen.cpp
    src/main.cpp)

add_executable(turtle ${SRCS})
target_link_libraries(turtle 3rdparty_stub)