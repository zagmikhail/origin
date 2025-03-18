#include "quadrangle.h"
#include "incorrect_figure.h"

Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
	if (angle_A + angle_B + angle_C + angle_D != 360) throw incorrect_figure("Ошибка создания фигуры. Причина: сумма углов не равна 360");
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
	std::cout << figure_name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << "; углы " << angle_A << ", " << angle_B << ", " << angle_C << ", " << angle_D << ") создан" << std::endl;
}

