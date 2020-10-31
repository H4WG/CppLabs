// Лабораторна робота #2. Завдання #1. Варіант #15 (складний рівень).

#include <iostream>
#include <math.h>

using namespace std;

double F(double d, double n)
{
	return sin((n+8*d))+((5-log(abs(n+d)))/(d-n));
}

double h(double d, double n)
{
	return pow(M_E,(2*n))+(4*d)*sqrt((3+n));
}

int main()
{
	// Я використав тип double замість float
	// для більш корректних результатів при самостійних розрахунках.
	double d = 12.45, n = 0.27;

	// Виведення початкових значеннь.
	cout << "\n  d = " << d << " | n = " << n << "\n";

	// Виведення першої формули та її результат розрахунків.
	cout << "\n\n                     5 - ln | n + d |\n";
	cout << "  F = sin (n + 8d) + ---------------- = " << F(d,n) << "\n";
	cout << "                           d - n\n";

	// Виведення другої формули та її результат розрахунків.
	// Для данної формули я додатково використав Unicode символи.
	cout << "\n                \u23BD\u23BD\u23BD\u23BD\u23BD\n";
	cout << "  h = e\u00B2\u207F + 4d \u221A3 + n = " << h(d,n) << "\n\n";

	return 0;
}
