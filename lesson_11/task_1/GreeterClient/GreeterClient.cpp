#include <iostream>
#include <Windows.h>
#include <greeter.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string user_name;
	MyStaticLibrary::Greeter obj_1;

	std::cout << "Введите имя: ";
	std::cin >> user_name;
	std::cout << obj_1.greet(user_name) << std::endl;

	return 0;
}