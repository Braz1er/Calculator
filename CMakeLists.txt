cmake_minimum_required(VERSION 3.28)
project(calc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "C:\\Qt\\6.8.0\\mingw_64")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(calc main.cpp
        calc.cpp
        calc.h
        numpad.cpp
        numpad.h
        screen.cpp
        screen.h
)

target_link_libraries(calc Qt6::Widgets)