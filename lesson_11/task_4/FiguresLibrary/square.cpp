#include "square.h"

namespace Figures
{
	Square::Square(int side_a) : Quadrangle(side_a, side_a, side_a, side_a, 90, 90, 90, 90) {
		figure_name = " вадрат";
	}
}