#include <iostream>
#include <Windows.h>

class Figure {
protected:
	int side;
public:
	Figure() {
		side = 0;
	}

	int get_side() {
		return side;
	}
};

class Triangle: public Figure {
public:
	Triangle() {
		side = 3;
	}
	
};

class Quadrangle: public Figure {
public:
	Quadrangle() {
		side = 4;
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
	std::cout << "Фигура: " << figure.get_side() << std::endl;
	std::cout << "Треугольник: " << triangle.get_side() << std::endl;
	std::cout << "Четырёхугольник: " << quauadrangle.get_side() << std::endl;

}



