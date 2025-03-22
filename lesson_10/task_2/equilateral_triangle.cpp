#include "equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int side_a) : Triangle(side_a, side_a, side_a, 60, 60, 60) {
	figure_name = "Равносторонний треугольник";
}