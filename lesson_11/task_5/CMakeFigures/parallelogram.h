#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Parallelogram : public Quadrangle
	{
	public:
		FIGURESLIBRARY_API Parallelogram(int side_a, int side_b, int angle_A, int angle_B);
	};
}