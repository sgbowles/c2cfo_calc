cmake_minimum_required(VERSION 3.5)
project(C2CFO_calc)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets REQUIRED)

add_executable(Calc main.cpp)
target_link_libraries(Calc Qt5::Widgets)