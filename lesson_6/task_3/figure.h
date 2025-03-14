#pragma once
#include <iostream>

class Figure
{
protected:
	std::string figure_name;
public:
	Figure();
	virtual void print_info();
};