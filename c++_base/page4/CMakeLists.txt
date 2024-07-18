cmake_minimum_required(VERSION 3.5) # Проверка версии CMake.
									# Если версия установленой программы
# 									# старее указаной, произайдёт аварийный выход.
set(CMAKE_CXX_STANDARD 23)

project(animal)			# Название проекта

set(SOURCE_EXE main.cpp)		# Установка переменной со списком исходников для исполняемого файла
                                   
set(SOURCE_LIB animal.cpp bird.cpp crow.cpp dog.cpp feline.cpp pigeon.cpp cat.cpp)			# Тоже самое, но для библиотеки
                                    
add_library(animal STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo
                                    
add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main
                                    
target_link_libraries(main animal)		# Линковка программы с библиотеко
