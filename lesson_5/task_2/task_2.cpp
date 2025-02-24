#include <iostream>
#include <Windows.h>

class Figure {
protected:
	std::string figure_name;
	int number_of_sides;
};

class Triangle: public Figure {
protected:
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
public:
	Triangle() {
		side_a = side_b = side_c = 0;
		angle_A = angle_B = angle_C = 0;
	}

	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {
		figure_name = "Треугольник";
		number_of_sides = 3;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}

	std::string get_figure() {
		return figure_name;
	}

	int get_side_a() {
		return side_a;
	}

	int get_side_b() {
		return side_b;
	}

	int get_side_c() {
		return side_c;
	}

	int get_angle_A() {
		return angle_A;
	}

	int get_angle_B() {
		return angle_B;
	}

	int get_angle_C() {
		return angle_C;
	}

};

class Right_triangle: public Triangle {
public:
	Right_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B): Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {
		figure_name = "Прямоугольный треугольник";
	}
};

class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {
		figure_name = "Равнобедренный треугольник";
	}
};

class Equilateral_triangle: public Triangle {
public:
	Equilateral_triangle(int side_a) : Triangle(side_a, side_a, side_a, 60, 60, 60) {
		figure_name = "Равносторонний треугольник";
	}
};

class Quadrangle: public Figure {
protected:
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;

public:
	Quadrangle() {
		side_a = side_b = side_c = side_d = 0;
		angle_A = angle_B = angle_C = angle_D = 0;
	}

	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
		figure_name = "Четырёхугольник";
		number_of_sides = 4;
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->side_d = side_d;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
		this->angle_D = angle_D;
	}

	std::string get_figure() {
		return figure_name;
	}

	int get_side_a() {
		return side_a;
	}

	int get_side_b() {
		return side_b;
	}

	int get_side_c() {
		return side_c;
	}

	int get_side_d() {
		return side_d;
	}

	int get_angle_A() {
		return angle_A;
	}

	int get_angle_B() {
		return angle_B;
	}

	int get_angle_C() {
		return angle_C;
	}

	int get_angle_D() {
		return angle_D;
	}
};

class Parallelogram: public Quadrangle {
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B): Quadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {
		figure_name = "Параллелограмм";
	}
};

class Rectangle_figure: public Quadrangle {
public:
	Rectangle_figure(int side_a, int side_b): Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90) {
		figure_name = "Прямоугольник";
	}
};

class Square: public Quadrangle {
public:
	Square(int side_a) : Quadrangle(side_a, side_a, side_a, side_a, 90, 90, 90, 90) {
		figure_name = "Квадрат";
	}
};

class Rhombus: public Quadrangle {
public:
	Rhombus(int side_a, int angle_A, int angle_B) : Quadrangle(side_a, side_a, side_a, side_a, angle_A, angle_B, angle_A, angle_B) {
		figure_name = "Ромб";
	}
};

void print_info_triangle(Triangle* figure) {
	std::cout << figure->get_figure() << ':' << std::endl;
	std::cout << "Стороны: " << "a = " << figure->get_side_a() << ' ' << "b = " << figure->get_side_b() << ' ' << "c = " << figure->get_side_c() << std::endl;
	std::cout << "Углы: " << "A = " << figure->get_angle_A() << ' ' << "B = " << figure->get_angle_B() << ' ' << "C = " << figure->get_angle_C() << std::endl;
}

void print_info_quadrangle(Quadrangle* figure) {
	
	std::cout << figure->get_figure() << ':' << std::endl;
	std::cout << "Стороны: " << "a = " << figure->get_side_a() << ' ' << "b = " << figure->get_side_b() << ' ' << "c = " << figure->get_side_c() << ' ' << "d = " << figure->get_side_d() << std::endl;
	std::cout << "Углы: " << "A = " << figure->get_angle_A() << ' ' << "B = " << figure->get_angle_B() << ' ' << "C = " << figure->get_angle_C() << ' ' << "D = " << figure->get_angle_D() << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Треугольник
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Triangle* ptr_triangle = &triangle;
	print_info_triangle(ptr_triangle);
	std::cout << std::endl;

	// Прямоугольный треугольник
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	Triangle* ptr_right_triangle = &right_triangle;
	print_info_triangle(ptr_right_triangle);
	std::cout << std::endl;

	// Равнобедренный треугольник
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Triangle* ptr_isosceles_triangle = &isosceles_triangle;
	print_info_triangle(ptr_isosceles_triangle);
	std::cout << std::endl;

	// Равносторонний треугольник
	Equilateral_triangle equilateral_triangle(30);
	Triangle* ptr_equilateral_triangle = &equilateral_triangle;
	print_info_triangle(ptr_equilateral_triangle);
	std::cout << std::endl;

	// Четырехугольник
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrangle* ptr_quadrangle = &quadrangle;
	print_info_quadrangle(ptr_quadrangle);
	std::cout << std::endl;

	// Прямоугольник
	Rectangle_figure rectangle_figure(10, 20);
	Quadrangle* ptr_rectangle_figure = &rectangle_figure;
	print_info_quadrangle(ptr_rectangle_figure);
	std::cout << std::endl;

	// Квадрат
	Square square(20);
	Quadrangle* ptr_square = &square;
	print_info_quadrangle(ptr_square);
	std::cout << std::endl;

	// Параллелограмм
	Parallelogram parallelogram(20, 30, 30, 40);
	Quadrangle* ptr_parallelogram = &parallelogram;
	print_info_quadrangle(ptr_parallelogram);
	std::cout << std::endl;

	// Ромб
	Rhombus rhombus(60, 40, 50);
	Quadrangle* ptr_rhombus = &rhombus;
	print_info_quadrangle(ptr_rhombus);
	std::cout << std::endl;
	
	return 0;
}


