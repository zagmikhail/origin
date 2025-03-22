#include "quadrangle.h"

Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
	figure_name = "Четырёхугольник";
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->side_d = side_d;
	this->angle_A = angle_A;
	this->angle_B = angle_B;
	this->angle_C = angle_C;
	this->angle_D = angle_D;
}

void Quadrangle::print_info() {
	std::cout << figure_name << std::endl;
	std::cout << "Стороны: " << "a = " << side_a << ' ' << "b = " << side_b << ' ' << "c = " << side_c << ' ' << "d = " << side_d << std::endl;
	std::cout << "Углы: " << "A = " << angle_A << ' ' << "B = " << angle_B << ' ' << "C = " << angle_C << ' ' << "D = " << angle_D << std::endl;
	std::cout << std::endl;
}

