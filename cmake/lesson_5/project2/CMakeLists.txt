cmake_minimum_required(VERSION 3.5)

project(print2)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++17)

add_library(${PROJECT_NAME} src/print2.cpp)
add_library(sub::print2 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)



   