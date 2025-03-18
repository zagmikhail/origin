#include "rhombus.h"
#include "incorrect_figure.h"

Rhombus::Rhombus(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {
	if ((side_a != side_b || side_b != side_c || side_c != side_d) || (angle_A != angle_C || angle_B != angle_D)) {
		throw incorrect_figure("Ошибка создания фигуры. Причина: стороны не равны или углы попарно не равны");
	}
	figure_name = "Ромб";
}