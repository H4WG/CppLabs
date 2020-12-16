// Лабораторна робота #9. Варіант #15.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// Зчитуємо файл data.txt.
	ifstream data;
	data.open("data.txt");

	string text;

        cout << setw(9)  << "ОС";
	cout << setw(16) << "СУБД";
	cout << setw(7)  << "ROM";
	cout << setw(5)  << "RAM";
        cout << setw(12) << "Ціна\n\n";

        while (getline(data, text)) {
		cout << text << endl;
	}

	// Закриваємо файл.
	data.close();

	return 0;
}
