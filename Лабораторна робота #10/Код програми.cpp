// Лабораторна робота #10. Варіант #15.

#include <iostream>
#include <cstring>

using namespace std;

struct SysInfo
{
	char OS[15], DBMS[15];
	float ROM, RAM, Cost;
};

SysInfo SI[2];

void set()
{
    for(int i = 0; i <= 2; i++)
    {
        cout << "ОС:\t";
        cin  >> SI[i].OS;

        cout << "СКБД:\t";
        cin  >> SI[i].DBMS;

        cout << "ROM:\t";
        cin  >> SI[i].ROM;

        cout << "RAM:\t";
        cin  >> SI[i].RAM;

        cout << "Cost:\t";
        cin  >> SI[i].Cost;

        cout << endl;
    }
}

void show()
{
    cout << "ОС"   << string(10,' ');
    cout << "СКДБ" << string(7,' ');
    cout << "ROM"  << string(2,' ');
    cout << "RAM"  << string(2,' ');
    cout << "Ціна\n\n";

    for(int i = 0; i <= 2; i++) {
        cout << SI[i].OS   << string(12 - strlen(SI[i].OS),' ');
        cout << SI[i].DBMS << string(11 - strlen(SI[i].DBMS),' ');
        cout << SI[i].ROM  << string(2,' ');
        cout << SI[i].RAM  << string(3,' ');
        cout << SI[i].Cost << endl;
    }

    cout << endl;
}

int main()
{
    set();
    show();

    return 0;
}
