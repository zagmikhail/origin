#pragma once
class Counter 
{
	int count_num_priv;
public:
	Counter();
	Counter(const int& count_num_user);
	int get_count_priv();
	int increment_func();
	int decrement_func();
};
