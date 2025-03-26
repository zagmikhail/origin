#pragma once
#include <iostream>
#ifdef MYDYNAMICLIBRARY_EXPORTS
#define MYDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define MYDYNAMICLIBRARY_API __declspec(dllimport)
#endif

namespace MyDynamicLibrary
{
	class Leaver
	{
	public:
		MYDYNAMICLIBRARY_API std::string leave(const std::string& name);
	};
}