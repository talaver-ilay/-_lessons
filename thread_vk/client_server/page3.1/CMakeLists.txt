cmake_minimum_required(VERSION 3.5) # Проверка версии CMake.
									# Если версия установленой программы
# 									# старее указаной, произайдёт аварийный выход.
set(CMAKE_CXX_STANDARD 23)

project(server)			# Название проекта

set(SOURCE_EXE server.cpp)		# Установка переменной со списком исходников для исполняемого файла
set(SOURCE_EXE2 client.cpp)                                   
                                    
add_executable(server ${SOURCE_EXE})	# Создает исполняемый файл с именем main
add_executable(client ${SOURCE_EXE2})	# Создает исполняемый файл с именем main
