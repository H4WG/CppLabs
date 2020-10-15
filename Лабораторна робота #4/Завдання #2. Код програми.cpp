// Лабораторна робота №4. Варіант #15. Завдання #2.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, S = 0, D = 1;

	cout << "\nВведіть значення A: ";
	cin >> a;

	cout << "\nЦикл\tСумма\t\tДобуток\n" << endl;

	for(int i = 1; i <= 4; i++)
	{
		S += pow(a,i)+2*i;
		D *= i+a*pow(i,2);
		cout << i << "\t" << S << "\t\t" << D <<  endl;
	}

	cout << endl;

	return 0;
}
