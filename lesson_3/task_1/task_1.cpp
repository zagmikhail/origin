#include <iostream>
#include <Windows.h>

class Calculator {
private:

    double num1;
    double num2;

public:

    Calculator() {
        num1 = 1;
        num2 = 1;
    }

    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double substract_1_2() {
        return num1 - num2;
    }

    double substract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num_1(const double& num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num_2(const double& num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator calc1;
    double num1;
    double num2;

    while (true)
    {
        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;

            if (calc1.set_num_1(num1) == 0) {
                std::cout << "Неверный ввод!\n";
            }
        } while (calc1.set_num_1(num1) == 0);

        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;

            if (calc1.set_num_2(num2) == 0) {
                std::cout << "Неверный ввод!\n";
            }
        } while (calc1.set_num_2(num2) == 0);





        std::cout << "num1 + num2 = " << calc1.add() << std::endl;

        std::cout << "num1 - num2 = " << calc1.substract_1_2() << std::endl;

        std::cout << "num2 - num1 = " << calc1.substract_2_1() << std::endl;

        std::cout << "num1 * num2 = " << calc1.multiply() << std::endl;

        std::cout << "num1 / num2 = " << calc1.divide_1_2() << std::endl;

        std::cout << "num2 / num1 = " << calc1.divide_2_1() << std::endl;

        std::cout << std::endl;
    }
}
