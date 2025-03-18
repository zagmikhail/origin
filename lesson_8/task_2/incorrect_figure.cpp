#include "incorrect_figure.h"

incorrect_figure::incorrect_figure(const char* message) : std::invalid_argument(message) {
	this->message = message;	
};
const char* incorrect_figure::what() const
{
	return message;
}
