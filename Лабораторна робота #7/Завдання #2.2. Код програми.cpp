// Лабораторна робота #7. Завдання #2.2. Варіант #15.
//
// В данній роботі, замість нулів я використав знак "-",
// для того, щоб результат роботи було чітко видно.

#include <iostream>
#include <iomanip>

using namespace std;

void Gen_Unit(int *pSize) {

	// Кількість елементів, які будуть виводитися в одному циклі.
	int Lenght = 0;

	// Нумерація елементів, які відповідають умові.
	int Num = 1;

	for(int i = 0; i <= *pSize; i++) {
		for(int j = 0; j <= *pSize; j++) {

			// Здійснюємо виведення елементів,
			// якщо вони відповідають заданій умові.
			if( j < Lenght || j > *pSize - Lenght )
			{
				cout << setw(3) << Num++;
			} else {
				cout << setw(3) << "-";
			}

		}

		// З кожним циклом, кількість елементів буде збільшуватися.
		// Як тільки цикл дійде середини, то значення почне зменшуватися.
		if( i < *pSize / 2 ) {
			Lenght++;
		} else {
			Lenght--;
		}

		cout << endl;
	}
}

int main()
{
	int Size; // Розмір масиву.

	// Для демонстрації роботи функції, я використав цикл.
	for(int i = 0; i < 3; i++) {
		cout << "Введіть розмір масиву (парне число): ";
		cin  >> Size;

		Gen_Unit(&Size);
	}

	return 0;
}
