cmake_minimum_required(VERSION 3.5)
project(C2CFO_calc)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets REQUIRED)

add_executable(Calc main.cpp 
	window.hpp window.cpp
	contract_widget.hpp contract_widget.cpp
	market_widget.hpp market_widget.cpp
	player_widget.hpp player_widget.cpp
	salary_widget.hpp salary_widget.cpp
	year_widget.hpp year_widget.cpp)
target_link_libraries(Calc Qt5::Widgets)