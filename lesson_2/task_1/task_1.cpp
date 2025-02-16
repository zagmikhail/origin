#include <iostream>

enum Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {

    setlocale(LC_ALL, "Russian");
    
    int number_month;

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> number_month;
        number_month = static_cast<Months>(number_month);

        switch (number_month) {
        case 0:
            std::cout << "До свидания!" << std::endl;
            break;
        case Months::January:
            std::cout << "Январь\n" << std::endl;
            break;
        case Months::February:
            std::cout << "Февраль\n" << std::endl;
            break;
        case Months::March:
            std::cout << "Март\n" << std::endl;
            break;
        case Months::April:
            std::cout << "Апрель\n" << std::endl;
            break;
        case Months::May:
            std::cout << "Май\n" << std::endl;
            break;
        case Months::June:
            std::cout << "Июнь\n" << std::endl;
            break;
        case Months::July:
            std::cout << "Июль\n" << std::endl;
            break;
        case Months::August:
            std::cout << "Август\n" << std::endl;
            break;
        case September:
            std::cout << "Сентябрь\n" << std::endl;
            break;
        case Months::October:
            std::cout << "Октябрь\n" << std::endl;
            break;
        case Months::November:
            std::cout << "Ноябрь\n" << std::endl;
            break;
        case Months::December:
            std::cout << "Декабрь\n" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!\n" << std::endl;
            break;
        }

    } while (number_month != 0);
   

    return 0;
}

