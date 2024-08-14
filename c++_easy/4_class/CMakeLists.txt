cmake_minimum_required(VERSION 3.5)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")
set(CMAKE_BUILD_TYPE Debug)

file(GLOB 
            SOURCE "src/*.cpp")

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(${PROJECT_NAME} ${SOURCE})
