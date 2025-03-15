#define MODE 5
#include <iostream>
#include <Windows.h>

#if MODE == 1
double func_add(const double& num_1, const double& num_2) {
	return num_1 + num_2;
}
#endif 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#ifndef MODE
#error MODE must be defined

#elif MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме!" << std::endl;

	double user_num_1 = 0;
	double user_num_2 = 0;

	std::cout << "Введите первое число: ";
	std::cin >> user_num_1;
	std::cout << "Введите второе число: ";
	std::cin >> user_num_2;
	std::cout << "Сумма равна: " << func_add(user_num_1, user_num_2) << std::endl;

#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif 

return 0;
   
}
