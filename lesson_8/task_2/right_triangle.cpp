#include "right_triangle.h"
#include "incorrect_figure.h"

Right_triangle::Right_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C): Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C) {
	if (angle_A != 90 && angle_B != 90 && angle_C != 90) throw incorrect_figure("Ошибка создания фигуры. Причина: нет прямого угла");
	figure_name = "Прямоугольный треугольник";
}
