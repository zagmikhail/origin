#include "square.h"
#include "incorrect_figure.h"

Square::Square(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {
	if ((side_a != side_b || side_b != side_c || side_c != side_d) || (angle_A != 90 || angle_B != 90 || angle_C != 90 || angle_D != 90)) {
		throw incorrect_figure("Ошибка создания фигуры. Причина: стороны не равны или не все углы прямые");
	}
	figure_name = "Квадрат";
}