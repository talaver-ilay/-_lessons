cmake_minimum_required(VERSION 3.5)

project(cmake_example_1)
# set(CMAKE_BUILD_TYPE Debug)
#${PROJECT_NAME}

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD 17)
#or
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++03")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c89")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

#add_definitions(-Wall -O2)
#or
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O2")

#set(SOURCE main.cpp)
#or
# file(GLOB CPPS "*.cpp")
file(GLOB 
            CPPS "*.cpp"
            CS   "*.c")
#add_executable(${PROJECT_NAME} main.cpp)
#add_executable(${PROJECT_NAME} ${SOURCE})
#or
# add_executable(${PROJECT_NAME} ${CPPS})
add_executable(${PROJECT_NAME} ${CPPS} ${CS})