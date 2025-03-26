#include "greeter.h"

namespace MyStaticLibrary 
{
	std::string Greeter::greet(const std::string& name) {
		return "Здравствуйте, " + name + '!';
	}
}