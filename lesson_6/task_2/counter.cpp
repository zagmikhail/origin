#include "counter.h"
Counter::Counter() {count_num_priv = 1;}
Counter::Counter(const int& count_num_user) {count_num_priv = count_num_user;}

int Counter::get_count_priv() {return count_num_priv;}
int Counter::increment_func() {return ++count_num_priv;}
int Counter::decrement_func() {return --count_num_priv;}
