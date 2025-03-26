#pragma once
#include "triangle.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Equilateral_triangle : public Triangle
	{
	public:
		FIGURESLIBRARY_API Equilateral_triangle(int side_a);
	};
}