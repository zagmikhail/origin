#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Rectangle_figure : public Quadrangle
	{
	public:
		FIGURESLIBRARY_API Rectangle_figure(int side_a, int side_b);
	};
}
