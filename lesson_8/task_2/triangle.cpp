#include "triangle.h"
#include "incorrect_figure.h"

Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {
	if (angle_A + angle_B + angle_C != 180) throw incorrect_figure("Ошибка создания фигуры. Причина: сумма углов не равна 180");
	figure_name = "Треугольник";
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->angle_A = angle_A;
	this->angle_B = angle_B;
	this->angle_C = angle_C;
};

void Triangle::print_info() {
	std::cout << figure_name << " (стороны: " << side_a << ", " << side_b << ", " << side_c << "; углы " << angle_A << ", " << angle_B << ", " << angle_C << ") создан" << std::endl;
}



