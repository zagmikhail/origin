#pragma once
#include "triangle.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Isosceles_triangle : public Triangle
	{
	public:
		FIGURESLIBRARY_API Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B);
	};
}