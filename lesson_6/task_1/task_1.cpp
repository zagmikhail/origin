#include <iostream>
#include <Windows.h>
#include "math_func.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float number_first = 0;
    float number_second = 0;
    int operation_number = 0;

    std::cout << "Введите первое число: ";
    std::cin >> number_first;
    std::cout << "Введите второе число: ";
    std::cin >> number_second;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation_number;
    
    if (operation_number == 1) {
        std::cout << number_first << " плюс " << number_second << " = " << add_func(number_first, number_second) << std::endl;
    }

    if (operation_number == 2) {
        std::cout << number_first << " минус " << number_second << " = " << diff_func(number_first, number_second) << std::endl;
    }

    if (operation_number == 3) {
        std::cout << number_first << " умножить на " << number_second << " = " << mult_func(number_first, number_second) << std::endl;
    }

    if (operation_number == 4) {
        std::cout << number_first << " разделить на " << number_second << " = " << div_func(number_first, number_second) << std::endl;
    }

    if (operation_number == 5) {
        std::cout << number_first << " в степени " << number_second << " = ";
        std::cout << power_func(number_first, number_second) << std::endl;
    }

    return 0;
}

