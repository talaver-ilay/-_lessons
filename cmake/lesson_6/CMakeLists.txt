cmake_minimum_required(VERSION 3.5)

project(package_find)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules
                      ${CMAKE_MODULE_PATH})
                      
set(all_found_result "ok")

include(test)

find_package(_OpenSSL)

add_executable(package_find main.cpp)

if(all_found_result STREQUAL "ok")
    massage("all libraries was found")
else()
    massage(FATAL_ERROR "Not all libraries was found")
endif()

massage(STATUS "status")
massage(WARNING "warning")
massage(AUTHOR_WARNING "author warning")
massage(SEND_ERROR "send error")
massage(DEPRECTION "deprection")
massage(FATAL_ERROR "fatal error")