#include <iostream>
#include <Windows.h>

int main(int argc, char** agrv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string user_name;
	std::cout << "Введите имя: ";
	std::cin >> user_name;
	std::cout << "Здравствуйте, " << user_name << '!' << std::endl;

	return 0;
}