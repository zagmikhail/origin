#include "triangle.h"

namespace Figures
{
	Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {
		figure_name = "Треугольник";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	};

	void Triangle::print_info() {
		std::cout << figure_name << std::endl;
		std::cout << "Стороны: " << "a = " << side_a << ' ' << "b = " << side_b << ' ' << "c = " << side_c << std::endl;
		std::cout << "Углы: " << "A = " << angle_A << ' ' << "B = " << angle_B << ' ' << "C = " << angle_C << std::endl;
		std::cout << std::endl;
	}
}