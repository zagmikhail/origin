#include <iostream>
#include <Windows.h>

struct bank_account {
    int num_account;
    std::string name;
    float amount;
};

void change_amount_func(bank_account& pers, float new_amount) {
    pers.amount = new_amount;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bank_account pers;
    float new_amount{ 0 };

    std::cout << "Введите номер счёта: ";
    std::cin >> pers.num_account;

    std::cout << "Введите имя владельца: ";
    std::cin >> pers.name;

    std::cout << "Введите баланс: ";
    std::cin >> pers.amount;

    std::cout << "Введите новый баланс: ";
    std::cin >> new_amount;

    change_amount_func(pers, new_amount);

    setlocale(LC_ALL, "Russian");
    std::cout << "Ваш счёт: " << pers.name << ", " << pers.num_account << ", " << pers.amount << std::endl;
}

