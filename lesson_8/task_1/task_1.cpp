#include <iostream>
#include <Windows.h>

class bad_length : public std::exception
{
public:
	const char* what() const override {
		return "Вы ввели слово запретной длины! До свидания!";
	}
};

int function_length(std::string str, int forbidden_length) 
{
	if (str.length() == forbidden_length) throw bad_length();
	return str.length();
}

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string user_str;
	int forbidden_length = 0;
	int result = 0;

	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	try
	{
		do {
			std::cout << "Введите слово: ";
			std::cin >> user_str;
			result = function_length(user_str, forbidden_length);
			std::cout << "Длина слова " << '"' << user_str << '"' << " равна " << result << std::endl;
		} while (result != forbidden_length);
	}

	catch (const bad_length& exp) 
	{
		std::cout << exp.what() << std::endl;
	}

	return 0;
}
