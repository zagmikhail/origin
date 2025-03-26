#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Square : public Quadrangle
	{
	public:
		FIGURESLIBRARY_API Square(int side_a);
	};
}
