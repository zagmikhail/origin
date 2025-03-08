#include "math_func.h"

double add_func(const float& num_1, const float& num_2) {
	return num_1 + num_2;
}

double diff_func(const float& num_1, const float& num_2) {
	return num_1 - num_2;
}

double mult_func(const float& num_1, const float& num_2) {
	return num_1 * num_2;
}

double div_func(const float& num_1, const float& num_2) {
	return num_1 / num_2;
}

double power_func(const float& num_1, const float& degree) {
	static float result = 1;
	for (int i = 0; i < (degree); ++i) {
		result = result * num_1;	
	}
	return result;
}