cmake_minimum_required(VERSION 3.5)

project(cmake_example_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -O2")

#---------------Create a library---------------------------
include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME}_lib SHARED src/print.cpp)

