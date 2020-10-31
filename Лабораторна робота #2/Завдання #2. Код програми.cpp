// Лабораторна робота #2. Завдання #2. Варіант #15 (складний рівень).

#include <iostream>
#include <math.h>

using namespace std;

double Fx(double a, double x)
{
	return a * cbrt(x) * pow(M_E,3.7);
}

double Fy(double x)
{
	return tan(2*pow(x,2))*log10(5*x);
}

double Fz(double b, double x)
{
	return asin(x+2*b);
}

int main()
{
	double a = 0.57, b = 0.37, x = 0.01;

	// Виводимо початкові значення.
	cout << "\nA = " << a << "; B = " << b << "; X = " << x << "\n";

	// Для більш простіших розрахунків я поділив формулу на пару частин.
	// По-перше, для самостійних розрахунків.
	// По-друге, для скорочення довгої формули.
	cout << "Fx = " << Fx(a,x) << "; Fy = " << Fy(x) << "; ";
	cout << "Fz = " << Fz(b,x) << "\n";
	cout << "Fx + Fy = " << Fx(a,x) + Fy(x) << "; ";
	cout << "Fxy / Fz = " << ( Fx(a,x) + Fy(x) ) / Fz(b,x) << "\n";
	cout << "Y = " << ( Fx(a,x) + Fy(x) ) / Fz(b,x) << "\n\n";

	return 0;
}
