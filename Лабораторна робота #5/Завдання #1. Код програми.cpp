// Лабораторна робота #5. Завдання #1.
//
// Знайти середнє значення позитивних елементів масиву, якщо позитивне
// значення масиву менше середнього, то замінити на середнє значення.
//
// Розмірність масиву:	200.
// Діапазон значень: 	Від -100 до 100.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int Sum_Positive_Values;   // Сума позитивних значень.
	int Count_Positive_Values; // Кількість позитивних значень.
	int Average_Values[20];    // Середнє значення.
	int arr[20][10];           // Масив для збереження згенерованих чисел.

	srand(time(NULL));	   // Ініціалізація rand().

	cout << "\nЗдійснюємо генерацію самого масиву (без змін).\n\n";

	for(int i = 0; i <= 19; i++) {

		Sum_Positive_Values = 0;
		Count_Positive_Values = 0;

		cout << setw(2) << i + 1 << ": ";

		// Генерація чисел та збереження у їх у масив.
		for(int j = 0; j <= 9; j++) {
			arr[i][j] = rand() % 201 -100;
			cout << setw(5) << arr[i][j];

			// Шукаємо середнє значення з позитивних значень.
			if( 0 < arr[i][j] ) {
				Sum_Positive_Values += arr[i][j];
				Count_Positive_Values++;
			}
		}

		Average_Values[i] = Sum_Positive_Values / Count_Positive_Values;

		cout << "  |  " <<  Average_Values[i] << endl;
	}

	cout << "\nВиведення редагованого масиву (згідно зі завданням).\n\n";

	for(int i = 0; i <= 19; i++) {
		cout << setw(2) << i + 1 << ": ";

		// Використовуємо середнє значення для заміни
		// позитивного значення, яке є менше середнього.
		for(int j = 0; j <= 9; j++) {
			if( arr[i][j] < Average_Values[i] && -1 < arr[i][j] ) {
				cout << setw(5) << Average_Values[i];
			} else {
				cout << setw(5) << arr[i][j];
			}
		}

		cout << "  |  " <<  Average_Values[i] << endl;
	}

	cout << endl;

	return 0;
}
