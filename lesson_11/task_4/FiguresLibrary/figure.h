#pragma once
#include <iostream>

#ifdef FIGURESLIBRARY_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Figure
	{
	protected:
		std::string figure_name;
	public:
		FIGURESLIBRARY_API Figure();
		FIGURESLIBRARY_API virtual void print_info();
	};
}
