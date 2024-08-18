cmake_minimum_required(VERSION 3.5)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")
set(CMAKE_BUILD_TYPE Debug)

# OpenGL
find_package(OpenGL REQUIRED)
if(OPENGL_FOUND)
    include_directories(${OPENGL_INCLUDE_DIRS})
    set(OPENGL_LIBS ${OPENGL_LIBRARIES})
else()
    message(FATAL_ERROR "OpenGL library not found")
endif()
#end

link_directories(${CMAKE_SOURCE_DIR}/libs)
set(GLFW3_LIBS libglfw3.a)
set(OPENGL_LIBS2 libglut.a)

include_directories(${CMAKE_SOURCE_DIR}/inc)

set(TOOLS_SRC tools_src)

file(GLOB SOURCE "src/*.cpp")
file(GLOB SOURCE_TOOLS "${TOOLS_SRC}/*.cpp")
file(GLOB SOURCE_GRAPHICAL "${TOOLS_SRC}/graphical_library/*.cpp")
file(GLOB SOURCE_ALGORITHMS "${TOOLS_SRC}/algorithms/*.cpp")
file(GLOB SOURCE_MATH "${TOOLS_SRC}/math/*.cpp")
file(GLOB SOURCE_PHYSICS "${TOOLS_SRC}/physics/*.cpp")
file(GLOB SOURCE_UNIT_TESTS "${TOOLS_SRC}/unit_tests/*.cpp")


add_executable(${PROJECT_NAME} ${SOURCE} ${SOURCE_TOOLS} ${SOURCE_GRAPHICAL} ${SOURCE_ALGORITHMS} ${SOURCE_MATH} ${SOURCE_PHYSICS} ${SOURCE_UNIT_TESTS})

set(EXTRA_LIBS X11 Xext Xxf86vm Xrandr Xi)

target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBS} ${OPENGL_LIBS2} ${GLFW3_LIBS} ${EXTRA_LIBS})