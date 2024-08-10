cmake_minimum_required(VERSION 3.5) # Проверка версии CMake.

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23 -Wall")

set(CMAKE_BUILD_TYPE Debug) 

project(vector)			# Название проекта

set(SOURCE main4.cpp)		# Установка переменной со списком исходников для исполняемого файла   

add_executable(main ${SOURCE})	# Создает исполняемый файл с именем main
