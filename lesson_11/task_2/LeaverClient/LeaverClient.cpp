#include <iostream>
#include <Windows.h>
#include "leaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string UserName;
    MyDynamicLibrary::Leaver obj1;
    
    std::cout << "Введите имя: ";
    std::cin >> UserName;
    std::cout << obj1.leave(UserName) << std::endl;
}

