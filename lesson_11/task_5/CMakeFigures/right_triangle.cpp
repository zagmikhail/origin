#include "right_triangle.h"

namespace Figures
{
	Right_triangle::Right_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {
		figure_name = "Прямоугольный треугольник";
	}
}