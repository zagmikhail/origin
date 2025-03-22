#include "rhombus.h"

Rhombus::Rhombus(int side_a, int angle_A, int angle_B) : Quadrangle(side_a, side_a, side_a, side_a, angle_A, angle_B, angle_A, angle_B) {
	figure_name = "Ромб";
}