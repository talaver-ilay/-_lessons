cmake_minimum_required(VERSION 3.5)

project(cmake_example_3)

set(${PROJECT_NAME}_VERSION_MAJOR 1)
set(${PROJECT_NAME}_VERSION_MINOR 2)
set(${PROJECT_NAME}_VERSION_PATCH 3)
set(${PROJECT_NAME}_VERSION_TWEAK 4)
set(${PROJECT_NAME}_VERSION "${PROJECT_NAME}_VERSION_MAJOR}.${${PROJECT_NAME}_VERSION_MINOR}.${${PROJECT_NAME}_VERSION_PATCH}.${${PROJECT_NAME}_VERSION_TWEAK}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -O2")



configure_file(
                    "${PROJECT_SOURCE_DIR}/include/ver.h.in"
                    "${PROJECT_BINARY_DIR}/include/version.h"
                    )

configure_file(
    "${PROJECT_SOURCE_DIR}/include/path.h.in"
    "${PROJECT_BINARY_DIR}/include/path.h"
    )

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_BINARY_DIR}/include")

#---------------Create a library---------------------------
# add_library(${PROJECT_NAME}_lib SHARED src/print.cpp)
add_library(${PROJECT_NAME}_lib STATIC src/print.cpp)

# add_library(${PROJECT_NAME}_lib_lib ALIAS ${PROJECT_NAME}_lib) ALIES - псевдоним

target_include_directories(${PROJECT_NAME}_lib PUBLIC ${PROJECT_SOURCE_DIR}/src)

#---------------Create an executable-----------------------
file(GLOB 
            CPPS "src/*.cpp")

add_executable(${PROJECT_NAME} ${CPPS})

# link new lib to binary target
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_lib)