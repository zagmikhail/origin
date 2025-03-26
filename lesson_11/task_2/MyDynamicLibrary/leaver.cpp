#include "leaver.h"

namespace MyDynamicLibrary
{
	std::string Leaver::leave(const std::string& name)
	{
		return "До свидания, " + name + '!';
	}
}