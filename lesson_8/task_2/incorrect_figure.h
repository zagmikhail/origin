#pragma once
#include <iostream>

class incorrect_figure : public std::invalid_argument {
	const char* message;
public:
	incorrect_figure(const char* message);
	const char* what() const override;
};
