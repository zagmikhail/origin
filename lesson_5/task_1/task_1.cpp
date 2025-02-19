#include <iostream>
#include <Windows.h>

class Figure {
protected:
	int side;
	std::string figure_name;
public:
	Figure() {
		side = 0;
		figure_name = "Фигура";
	}

	int get_side() {
		return side;
	}

	std::string get_figure() {
		return figure_name;
	}
};

class Triangle: public Figure {
public:
	Triangle() {
		side = 3;
		figure_name = "Треугольник";
	}
	
};

class Quadrangle: public Figure {
public:
	Quadrangle() {
		side = 4;
		figure_name = "Четырёхугольник";
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure figure;
	Triangle triangle;
	Quadrangle quauadrangle;
	std::cout << "Количество сторон:" << std::endl;
	std::cout << figure.get_figure() << ": " << figure.get_side() << std::endl;
	std::cout << triangle.get_figure() << ": " << triangle.get_side() << std::endl;
	std::cout << quauadrangle.get_figure() << ": " << quauadrangle.get_side() << std::endl;

}



