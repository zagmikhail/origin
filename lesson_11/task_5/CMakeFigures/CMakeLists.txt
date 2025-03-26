cmake_minimum_required(VERSION 3.22.0)
project(CMakeFigures)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(
	FiguresLibrary SHARED 
	figure.h figure.cpp 
	triangle.h triangle.cpp 
	isosceles_triangle.h isosceles_triangle.cpp 
	equilateral_triangle.h equilateral_triangle.cpp 
	right_triangle.h right_triangle.cpp 
	quadrangle.h quadrangle.cpp 
	rectangle_figure.h rectangle_figure.cpp 
	parallelogram.h parallelogram.cpp
	rhombus.h rhombus.cpp 
	square.h square.cpp
)
add_executable(FiguresCMakeExe FigureClient.cpp)
target_link_libraries(FiguresCMakeExe FiguresLibrary)
