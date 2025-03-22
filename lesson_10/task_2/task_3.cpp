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
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Figure* ptr_triangle = &triangle;
	ptr_triangle->print_info();

	// Прямоугольный треугольник
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	Triangle* ptr_right_triangle = &right_triangle;
	ptr_right_triangle->print_info();


	// Равнобедренный треугольник
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Triangle* ptr_isosceles_triangle = &isosceles_triangle;
	ptr_isosceles_triangle->print_info();

	// Равносторонний треугольник
	Equilateral_triangle equilateral_triangle(30);
	Triangle* ptr_equilateral_triangle = &equilateral_triangle;
	ptr_equilateral_triangle->print_info();

	// Четырехугольник
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrangle* ptr_quadrangle = &quadrangle;
	ptr_quadrangle->print_info();

	// Прямоугольник
	Rectangle_figure rectangle_figure(10, 20);
	Quadrangle* ptr_rectangle_figure = &rectangle_figure;
	ptr_rectangle_figure->print_info();

	// Квадрат
	Square square(20);
	Quadrangle* ptr_square = &square;
	ptr_square->print_info();

	// Параллелограмм
	Parallelogram parallelogram(20, 30, 30, 40);
	Quadrangle* ptr_parallelogram = &parallelogram;
	ptr_parallelogram->print_info();

	// Ромб
	Rhombus rhombus(60, 40, 50);
	Quadrangle* ptr_rhombus = &rhombus;
	ptr_rhombus->print_info();

	return 0;
}
