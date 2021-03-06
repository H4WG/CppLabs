// Лабораторна робота #6. Завдання #2.1. Варіант #15.
//
// В данній роботі, замість нулів я використав знак "-",
// для того, щоб результат роботи було чітко видно.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Розмір масиву.
	int Size;
	int *pSize   = &Size;

	// Кількість елементів, які будуть виводитися в одному циклі.
	int Lenght   = 0;
	int *pLenght = &Lenght;

	// Нумерація елементів, які відповідають умові.
	int Num      = 1;
	int *pNum    = &Num;

	cout << "Введіть розмір масиву (парне число): ";
	cin  >> *pSize;

	for(int i = 0; i <= *pSize; i++) {
		for(int j = 0; j <= *pSize; j++) {

			// Здійснюємо виведення елементів,
			// якщо вони відповідають заданій умові.
			if( j < *pLenght || j > *pSize - *pLenght )
			{
				cout << setw(3) << (*pNum)++;
			} else {
				cout << setw(3) << "-";
			}

		}

		// З кожним циклом, кількість елементів буде збільшуватися.
		// Як тільки цикл дійде середини, то значення почне зменшуватися.
		if( i < *pSize / 2 ) {
			(*pLenght)++;
		} else {
			(*pLenght)--;
		}

		cout << endl;
	}

	return 0;
}
