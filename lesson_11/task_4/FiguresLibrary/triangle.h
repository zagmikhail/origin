#pragma once
#include <iostream>
#include "figure.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Triangle : public Figure
	{
	protected:
		int side_a, side_b, side_c;
		int angle_A, angle_B, angle_C;

	public:
		FIGURESLIBRARY_API Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
		FIGURESLIBRARY_API void print_info() override;
	};
}