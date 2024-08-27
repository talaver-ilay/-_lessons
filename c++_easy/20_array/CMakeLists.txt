cmake_minimum_required(VERSION 3.5)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCE "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE})


