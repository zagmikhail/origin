#include <iostream>
#include <Windows.h>

class Counter {
	int count_num_priv;

public:

	Counter() {
		count_num_priv = 1;
	}

	Counter(const int& count_num_user) {
		count_num_priv = count_num_user;
	}

	int get_count_priv(){
		return count_num_priv;
	}

	int increment_func() {
		return ++count_num_priv;
	}

	int decrement_func() {
		return --count_num_priv;
	}
};

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string user_answer{ 0 };
	char user_command{ 0 };
	int count_num_user{ 0 };
	Counter count_1;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> user_answer;

	if (user_answer == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> count_num_user;
		count_1 = Counter(count_num_user);
	}

	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> user_command;

		switch (user_command) 
		{
		case '+':
			count_1.increment_func();
			break;
		case '-':
			count_1.decrement_func();
			break;
		case '=':
			std::cout << count_1.get_count_priv();
			std::cout << std::endl;
			break;
		case 'x':
			std::cout << "До свидания!";
			break;
		default:
			std::cout << "Неверная команда!";
			std::cout << std::endl;
		}
				
	} while (user_command != 'x' );
		
return 0;
}
