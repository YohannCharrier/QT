cmake_minimum_required(VERSION 3.7)
project(TP3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(TP3 main.cpp QWindowIHM.cpp QWindowIHM.h QWindowIHM2.cpp QWindowIHM2.h)
target_link_libraries(TP3 Qt5::Widgets)