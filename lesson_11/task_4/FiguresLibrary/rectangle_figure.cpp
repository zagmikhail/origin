#include "rectangle_figure.h"

namespace Figures
{
	Rectangle_figure::Rectangle_figure(int side_a, int side_b) : Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90) {
		figure_name = "Прямоугольник";
	}
}