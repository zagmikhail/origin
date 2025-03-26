#pragma once
#include "figure.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Quadrangle : public Figure
	{
	protected:
		int side_a, side_b, side_c, side_d;
		int angle_A, angle_B, angle_C, angle_D;

	public:
		FIGURESLIBRARY_API Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
		FIGURESLIBRARY_API void print_info() override;
	};
}
	