cmake_minimum_required(VERSION 3.5) 

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23 -Wall")

set(CMAKE_BUILD_TYPE Debug) 

project(vector)				

add_executable(enum enum.cpp)	
add_executable(multi_return multi_return.cpp)	
add_executable(union union.cpp)	
add_executable(vector_1 vector_1.cpp)	
add_executable(vector_2 vector_2.cpp)	