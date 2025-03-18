#include "isosceles_triangle.h"
#include "incorrect_figure.h"

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C) {
	if (side_a != side_c || angle_A != angle_C)
	{
		throw incorrect_figure("Ошибка создания фигуры. Причина: стороны a и c не равны или углы A и C не равны");
	}
	figure_name = "Равнобедренный треугольник";
}