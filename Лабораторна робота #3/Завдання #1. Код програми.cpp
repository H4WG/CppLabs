// Лабораторна робота #3. Завдання #1. Варіант #15.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y = 2.081, C = 1.231, D = 1.152;

	cout << "\nВведіть значення x: ";
	cin >> x;

	if(x <= y){
		cout << "A = " << C * pow(x,2) + D * y << "\n\n";
	} else {
		cout << "A = " << sqrt(x * y) + D * log(y) << "\n\n";
	}

	return 0;
}
