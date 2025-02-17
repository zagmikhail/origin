#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

class Address {
public:
	std::string city;
	std::string street;
	int house_number;
	int apartment_number;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream fin("E:\\Нетология\\homeworks_netol\\lesson_4\\task_2\\in.txt");

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

	Address* addr_arr = new Address[size];
	for (int i = 0; i < size; ++i) {
		fin >> addr_arr[i].city;
		fin >> addr_arr[i].street;
		fin >> addr_arr[i].house_number;
		fin >> addr_arr[i].apartment_number;
	}

	fin.close();

	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j <= size - 1; ++j) {
			if (addr_arr[i].city.compare(addr_arr[j].city) > 0) {
				Address tmp = addr_arr[i];
				addr_arr[i] = addr_arr[j];
				addr_arr[j] = tmp;
			}
		}
	}

	std::ofstream fout("E:\\Нетология\\homeworks_netol\\lesson_4\\task_2\\out.txt");
	fout << size;
	fout << std::endl;

	for (int i = 0; i < size; ++i) {
		fout << addr_arr[i].city;
		fout << ", ";
		fout << addr_arr[i].street;
		fout << ", ";
		fout << addr_arr[i].house_number;
		fout << ", ";
		fout << addr_arr[i].apartment_number;
		fout << std::endl;
	}
	fout.close();

	delete[] addr_arr;

	return 0;
}

