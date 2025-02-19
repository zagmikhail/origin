#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

class Address {
private:
	std::string city;
	std::string street;
	std::string house_number;
	std::string apartment_number;

public:
	Address(){}

	Address(const std::string& city, const std::string& street, const std::string& house_number, const std::string& apartment_number) {
		this->city = city;
		this->street = street;
		this->house_number = house_number;
		this->apartment_number = apartment_number;
	}

	std::string get_city() {
		return city;
	}

	std::string get_street() {
		return street;
	}

	std::string get_house_number() {
		return house_number;
	}

	std::string get_apartment_number() {
		return apartment_number;
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream fin("E:\\Нетология\\homeworks_netol\\lesson_4\\task_1\\in.txt");

	if (!fin.is_open()) {
		std::cout << "Не получилось открыть файл!" << std::endl;
		return 0;
	}
	
	std::string size_str;
	fin >> size_str;
	if (fin.eof()) {
		std::cout << "В файле всего одна строка или он пустой!" << std::endl;
		return 0;
	}
	int size = stoi(size_str);
	std::string city;
	std::string street;
	std::string house_number;
	std::string apartment_number;

	Address* addr_arr = new Address[size];
	for (int i = 0; i < size; ++i) {
		fin >> city;
		fin >> street;
		fin >> house_number;
		fin >> apartment_number;
		addr_arr[i] = Address(city, street, house_number, apartment_number);
	}

	fin.close();

	std::ofstream fout("E:\\Нетология\\homeworks_netol\\lesson_4\\task_1\\out.txt");
	fout << size;
	fout << std::endl;

	for (int i = size - 1; i >= 0; --i) {
		fout << addr_arr[i].get_city();
		fout << ", ";
		fout << addr_arr[i].get_street();
		fout << ", ";
		fout << addr_arr[i].get_house_number();
		fout << ", ";
		fout << addr_arr[i].get_apartment_number();
		fout << std::endl;
	}
	fout.close();

	delete[] addr_arr;
	
	return 0;

}
