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

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Треугольник
	Figures::Triangle triangle(10, 20, 30, 50, 60, 70);
	Figures::Figure* ptr_triangle = &triangle;
	ptr_triangle->print_info();

	// Прямоугольный треугольник
	Figures::Right_triangle right_triangle(10, 20, 30, 50, 60);
	Figures::Triangle* ptr_right_triangle = &right_triangle;
	ptr_right_triangle->print_info();


	// Равнобедренный треугольник
	Figures::Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Figures::Triangle* ptr_isosceles_triangle = &isosceles_triangle;
	ptr_isosceles_triangle->print_info();

	// Равносторонний треугольник
	Figures::Equilateral_triangle equilateral_triangle(30);
	Figures::Triangle* ptr_equilateral_triangle = &equilateral_triangle;
	ptr_equilateral_triangle->print_info();

	// Четырехугольник
	Figures::Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Figures::Quadrangle* ptr_quadrangle = &quadrangle;
	ptr_quadrangle->print_info();

	// Прямоугольник
	Figures::Rectangle_figure rectangle_figure(10, 20);
	Figures::Quadrangle* ptr_rectangle_figure = &rectangle_figure;
	ptr_rectangle_figure->print_info();

	// Квадрат
	Figures::Square square(20);
	Figures::Quadrangle* ptr_square = &square;
	ptr_square->print_info();

	// Параллелограмм
	Figures::Parallelogram parallelogram(20, 30, 30, 40);
	Figures::Quadrangle* ptr_parallelogram = &parallelogram;
	ptr_parallelogram->print_info();

	// Ромб
	Figures::Rhombus rhombus(60, 40, 50);
	Figures::Quadrangle* ptr_rhombus = &rhombus;
	ptr_rhombus->print_info();

	return 0;
}

