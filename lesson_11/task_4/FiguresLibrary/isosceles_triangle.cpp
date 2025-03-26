#include "isosceles_triangle.h"

namespace Figures
{
	Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {
		figure_name = "Равнобедренный треугольник";
	}
}