// Лабораторна робота #7. Завдання #1.
//
// Знайти середнє значення позитивних елементів масиву, якщо позитивне
// значення масиву менше середнього, то замінити на середнє значення.
//
// Розмірність масиву:	200.
// Діапазон значень: 	Від -100 до 100.

#include <iostream>
#include <iomanip>

using namespace std;

void Gen_Unit(int arr[][9], int Average_Values[19])
{
	int Sum_Positive_Values;   // Сума позитивних значень.
	int Count_Positive_Values; // Кількість позитивних значень.

	for(int i = 0; i <= 19; i++)
	{
		// Обнуляємо значення для розрахунку середнього значення.
		Sum_Positive_Values   = 0;
		Count_Positive_Values = 0;

		// Генерація чисел та збереження у їх у масив.
		for(int j = 0; j <= 9; j++)
		{
			arr[i][j] = rand() % 201 -100;

			// Заодно, шукаємо середнє значення з позитивних значень.
			if( 0 < arr[i][j] ) {
				Sum_Positive_Values += arr[i][j];
				Count_Positive_Values++;
			}
		}

		Average_Values[i] = Sum_Positive_Values / Count_Positive_Values;
	}
}

void Show_Unit(int arr[][9], int Average_Values[19])
{
	for(int i = 0; i <= 19; i++)
	{
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
}

int main()
{
	int Average_Values[19]; // Середнє значення.
	int arr[20][9];         // Масив для збереження згенерованих чисел.

	srand(time(NULL));      // Ініціалізація rand().

	cout << "[*] Здійснюємо генерацію масиву.";
	Gen_Unit(arr, Average_Values);

	cout << "\n[*] Виведення редагованого масиву (згідно зі завданням).\n\n";
	Show_Unit(arr, Average_Values);

	return 0;
}
