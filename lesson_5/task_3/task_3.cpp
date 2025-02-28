#include <iostream>
#include <Windows.h>

class Figure {
protected:
	std::string figure_name;
	int number_of_sides;
public:
	Figure(int number_of_sides) {
		figure_name = "Фигура";
		this->number_of_sides = number_of_sides;
	}

	virtual bool check() {
		if (number_of_sides == 0) {
			return true;
		}
		else {
			return false;	
		}
	}

	virtual void print_info() {
		std::cout << figure_name << ':' << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << number_of_sides << std::endl;
	}
};

class Triangle : public Figure {
protected:
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
public:
	Triangle(int number_of_sides, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C): Figure(number_of_sides) {
		figure_name = "Треугольник";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}

	bool check() override {
		if (number_of_sides == 3 && (angle_A + angle_B + angle_C == 180)) {
			return true;
		}
		else {
			return false;
		}
	}
	
	void print_info() override {
		Figure::print_info();
		std::cout << "Стороны: " << "a = " << side_a << ' ' << "b = " << side_b << ' ' << "c = " << side_c << std::endl;
		std::cout << "Углы: " << "A = " << angle_A << ' ' << "B = " << angle_B << ' ' << "C = " << angle_C << std::endl;
		std::cout << std::endl;
	}
};

class Right_triangle : public Triangle {
public:
	Right_triangle(int number_of_sides, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C): 
	Triangle(number_of_sides, side_a, side_b, side_c, angle_A, angle_B, angle_C) {
		figure_name = "Прямоугольный треугольник";
	}

	bool check() override {
		if (Triangle::check() == true && angle_C == 90) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle(int number_of_sides, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) :
	Triangle(number_of_sides, side_a, side_b, side_c, angle_A, angle_B, angle_C) {
		figure_name = "Равнобедренный треугольник";
	}

	bool check() override {
		if (Triangle::check() == true && side_a == side_c && angle_A == angle_C) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle(int number_of_sides, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) :
	Triangle(number_of_sides, side_a, side_b, side_c, angle_A, angle_B, angle_C) {
		figure_name = "Равносторонний треугольник";
	}

	bool check() override {
		if (Triangle::check() == true && (side_a == side_b && side_b == side_c) && (angle_A == angle_B  && angle_B == angle_C && angle_C == 60)) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Quadrangle : public Figure {
protected:
	int side_a, side_b, side_c, side_d;
	int angle_A, angle_B, angle_C, angle_D;
public:
	Quadrangle(int number_of_sides, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) :
	Figure(number_of_sides) {
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

	bool check() override {
		if (number_of_sides == 4 && (angle_A + angle_B + angle_C + angle_D == 360)) {
			return true;
		}
		else {
			return false;
		}
	}

	void print_info() override {
		std::cout << figure_name << ':' << std::endl;
		if (check() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Количество сторон: " << number_of_sides << std::endl;
		std::cout << "Стороны: " << "a = " << side_a << ' ' << "b = " << side_b << ' ' << "c = " << side_c << ' ' << "d = " << side_d << std::endl;
		std::cout << "Углы: " << "A = " << angle_A << ' ' << "B = " << angle_B << ' ' << "C = " << angle_C << ' ' << "D = " << angle_D << std::endl;
		std::cout << std::endl;
	}
};

class Rectangle_figure : public Quadrangle {
public:
	Rectangle_figure(int number_of_sides, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) :
		Quadrangle(number_of_sides, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {
		figure_name = "Прямоугольник";
	}

	bool check() override {
		if (Quadrangle::check() == true && side_a == side_c && side_b == side_d && (angle_A == angle_B && angle_B == angle_C && angle_C == angle_D && angle_D == 90)) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int number_of_sides, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) :
	Quadrangle(number_of_sides, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {
		figure_name = "Параллелограмм";
	}

	bool check() override {
		if (Quadrangle::check() == true && side_a == side_c && side_b == side_d && angle_A == angle_C && angle_B == angle_D) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Square : public Quadrangle {
public:
	Square(int number_of_sides, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) :
	Quadrangle(number_of_sides, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {
		figure_name = "Квадрат";
	}

	bool check() override {
		if (Quadrangle::check() == true && side_a == side_b && side_b == side_c && side_c == side_d && (angle_A == angle_B && angle_B == angle_C && angle_C == angle_D && angle_D == 90)) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Rhombus : public Quadrangle {
public:
	Rhombus(int number_of_sides, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) :
		Quadrangle(number_of_sides, side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {
		figure_name = "Ромб";
	}

	bool check() override {
		if (Quadrangle::check() == true && side_a == side_b && side_b == side_c && side_c == side_d && angle_A == angle_C && angle_B == angle_D) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Фигура
	Figure figure(0);
	figure.print_info();

	//std::cout << std::endl;

	// Треугольник
	Triangle triangle(2, 20, 50, 60, 40, 60, 80);
	Figure* ptr_triangle = &triangle;
	ptr_triangle->print_info();
	
	// Прямоугольный треугольник
	Right_triangle right_triangle(3, 45, 46, 64, 40, 50, 90);
	Figure* ptr_right_triangle = &right_triangle;
	ptr_right_triangle->print_info();

	// Равнобедренный треугольник
	Isosceles_triangle isosceles_triangle(3, 50, 70, 50, 50, 80, 50);
	Figure* ptr_isosceles_triangle = &isosceles_triangle;
	ptr_isosceles_triangle->print_info();

	// Равносторонний треугольник
	Equilateral_triangle equilateral_triangle(3, 40, 40, 40, 60, 60, 60);
	Figure* ptr_equilateral_triangle = &equilateral_triangle;
	ptr_equilateral_triangle->print_info();

	// Четырехугольник
	Quadrangle quadrangle(4, 20, 40, 20, 30, 50, 100, 80, 10);
	Quadrangle* ptr_quadrangle = &quadrangle;
	ptr_quadrangle->print_info();

	// Прямоугольник
	Rectangle_figure rectangle_figure(4, 20, 50, 80, 60, 90, 120, 80, 50);
	Quadrangle* ptr_rectangle_figure = &rectangle_figure;
	ptr_rectangle_figure->print_info();

	// Параллелограмм
	Parallelogram parallelogram(4, 20, 30, 20, 30, 80, 100, 80, 100);
	Quadrangle* ptr_parallelogram = &parallelogram;
	ptr_parallelogram->print_info();

	// Квадрат
	Square square(4, 50, 50, 50, 50, 90, 90, 90, 90);
	Quadrangle* ptr_square = &square;
	ptr_square->print_info();
	
	// Ромб
	Rhombus rhombus(4, 50, 50, 50, 50, 80, 100, 80, 100);
	Quadrangle* ptr_rhombus = &rhombus;
	ptr_rhombus->print_info();

	return 0;
}

