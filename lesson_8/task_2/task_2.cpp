#include <iostream>
#include <Windows.h>
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "rectangle_figure.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "incorrect_figure.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Треугольник
	try
	{
		Triangle triangle(10, 20, 30, 50, 70, 60);
		Figure* ptr_triangle = &triangle;
		ptr_triangle->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	

	// Прямоугольный треугольник
	try
	{
		Right_triangle right_triangle(25, 20, 30, 70, 40, 70);
		Triangle* ptr_right_triangle = &right_triangle;
		ptr_right_triangle->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	


	// Равнобедренный треугольник
	try
	{
		Isosceles_triangle isosceles_triangle(40, 10, 30, 50, 50, 80);
		Triangle* ptr_isosceles_triangle = &isosceles_triangle;
		ptr_isosceles_triangle->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	

	// Равносторонний треугольник
	try
	{
		Equilateral_triangle equilateral_triangle(30, 40, 60, 30, 80, 70);
		Triangle* ptr_equilateral_triangle = &equilateral_triangle;
		ptr_equilateral_triangle->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	

	// Четырехугольник
	try
	{
		Quadrangle quadrangle(10, 20, 30, 40, 90, 90, 90, 90);
		Quadrangle* ptr_quadrangle = &quadrangle;
		ptr_quadrangle->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	

	// Прямоугольник
	try
	{
		Rectangle_figure rectangle_figure(20, 40, 20, 80, 100, 70, 100, 80);
		Quadrangle* ptr_rectangle_figure = &rectangle_figure;
		ptr_rectangle_figure->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	

	// Квадрат
	try
	{
		Square square(40, 40, 40, 40, 90, 90, 90, 90);
		Quadrangle* ptr_square = &square;
		ptr_square->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}

	// Параллелограмм
	try
	{
		Parallelogram parallelogram(20, 30, 20, 30, 100, 90, 100, 70);
		Quadrangle* ptr_parallelogram = &parallelogram;
		ptr_parallelogram->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	
	// Ромб
	try
	{
		Rhombus rhombus(40, 40, 40, 40, 100, 80, 100, 80);
		Quadrangle* ptr_rhombus = &rhombus;
		ptr_rhombus->print_info();
	}
	catch (const incorrect_figure& err_fig)
	{
		std::cout << err_fig.what() << std::endl;
	}
	
	return 0;
}
