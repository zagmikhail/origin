#pragma once
#include "quadrangle.h"

class Square : public Quadrangle 
{
public:
	Square(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
};