#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Rhombus : public Quadrangle
	{
	public:
		FIGURESLIBRARY_API Rhombus(int side_a, int angle_A, int angle_B);
	};
}