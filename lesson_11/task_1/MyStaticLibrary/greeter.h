#pragma once
#include <iostream>

namespace MyStaticLibrary 
{
	class Greeter 
	{
	public:
		std::string greet(const std::string& name);
	};
}