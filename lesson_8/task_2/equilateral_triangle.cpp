#include "equilateral_triangle.h"
#include "incorrect_figure.h"

Equilateral_triangle::Equilateral_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C) {
	if ((side_a != side_b || side_b!= side_c) || (angle_A != 60 || angle_B != 60 || angle_C != 60))
	{
		throw incorrect_figure("Ошибка создания фигуры. Причина: не все стороны равны или не все углы равны 60");
	}
	figure_name = "Равносторонний треугольник";
}