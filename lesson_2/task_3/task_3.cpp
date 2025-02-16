#include <iostream>
#include <Windows.h>

struct address {
    std::string city;
    std::string street;
    int house_number;
    int apartment_number;
    int zip;
};

void print_address(address* adr) {
    std::cout << "Город: " << adr->city << std::endl;
    std::cout << "Улица: " << adr->street << std::endl;
    std::cout << "Номер дома: " << adr->house_number << std::endl;
    std::cout << "Номер квартиры: " << adr->apartment_number << std::endl;;
    std::cout << "Индекс: " << adr->zip << std::endl;;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address adr_1;

    adr_1.city = "Москва";
    adr_1.street = "Арбат";
    adr_1.house_number = 12;
    adr_1.apartment_number = 8;
    adr_1.zip = 123456;

    print_address(&adr_1);

    std::cout << std::endl;

    address adr_2;

    adr_2.city = "Ижевск";
    adr_2.street = "Пушкина";
    adr_2.house_number = 59;
    adr_2.apartment_number = 143;
    adr_2.zip = 953769;

    print_address(&adr_2);


   
}
