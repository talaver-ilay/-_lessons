cmake_minimum_required(VERSION 3.5)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

set(SOURCE main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})
