#include <iostream>
#include <Windows.h>

class Figure {
protected:
	std::string figure_name;
public:
	Figure() {
		figure_name = "Фигура";
	}

	virtual void print_info() {}
};

class Triangle: public Figure {
protected:
	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {
		figure_name = "Треугольник";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;
	}

	void print_info() override {
		std::cout << figure_name << std::endl;
		std::cout << "Стороны: " << "a = " << side_a << ' ' << "b = " << side_b << ' ' << "c = " << side_c << std::endl;
		std::cout << "Углы: " << "A = " << angle_A << ' ' << "B = " << angle_B << ' ' << "C = " << angle_C << std::endl;
		std::cout << std::endl;
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
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {
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

	void print_info() override {
		std::cout << figure_name << std::endl;
		std::cout << "Стороны: " << "a = " << side_a << ' ' << "b = " << side_b << ' ' << "c = " << side_c << ' ' << "d = " << side_d << std::endl;
		std::cout << "Углы: " << "A = " << angle_A << ' ' << "B = " << angle_B << ' ' << "C = " << angle_C << ' ' << "D = " << angle_D << std::endl;
		std::cout << std::endl;
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

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Треугольник
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Figure* ptr_triangle = &triangle;
	ptr_triangle->print_info();

	// Прямоугольный треугольник
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	Triangle* ptr_right_triangle = &right_triangle;
	ptr_right_triangle->print_info();
	

	// Равнобедренный треугольник
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Triangle* ptr_isosceles_triangle = &isosceles_triangle;
	ptr_isosceles_triangle->print_info();

	// Равносторонний треугольник
	Equilateral_triangle equilateral_triangle(30);
	Triangle* ptr_equilateral_triangle = &equilateral_triangle;
	ptr_equilateral_triangle->print_info();
	
	// Четырехугольник
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrangle* ptr_quadrangle = &quadrangle;
	ptr_quadrangle->print_info();

	// Прямоугольник
	Rectangle_figure rectangle_figure(10, 20);
	Quadrangle* ptr_rectangle_figure = &rectangle_figure;
	ptr_rectangle_figure->print_info();

	// Квадрат
	Square square(20);
	Quadrangle* ptr_square = &square;
	ptr_square->print_info();

	// Параллелограмм
	Parallelogram parallelogram(20, 30, 30, 40);
	Quadrangle* ptr_parallelogram = &parallelogram;
	ptr_parallelogram->print_info();

	// Ромб
	Rhombus rhombus(60, 40, 50);
	Quadrangle* ptr_rhombus = &rhombus;
	ptr_rhombus->print_info();
	
	return 0;
}


