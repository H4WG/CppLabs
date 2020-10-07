// Лабораторна робота #4, Завдання #2. Варіант #15.

#include <iostream>
#include <math.h>

using namespace std;

double F(double x)
{
	return ((sin(x))/(log10(x + 3))) + sqrt(2*x+1)+4;
}

int main()
{
	int xA = 20, xB = 20;

	cout << "\nWHILE" << endl;

	while(xA <= 30)
	{
		cout << "  Y = " << xA << "; Y = " << F(xA) << endl;
		xA++;
	}

	cout << "\nDO WHILE\n";

	do{
		cout << "  Y = " << xB << "; Y = " << F(xB) << endl;
		xB++;
	} while(xB <= 30);

	return 0;
}
