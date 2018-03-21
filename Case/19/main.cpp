#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int year, od, de;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть рік : " << endl;
	cin >> year;

	//for (; year <= 2031; year++) {

		od = year % 10;

		switch (od) {
		case 0:
		case 1: { cout << year << " Рік білого(ї) "; break; }
		case 2:
		case 3: { cout << year << " Рік синього(ї) "; break; }
		case 4:
		case 5: { cout << year << " Рік зеленого(ї) "; break; }
		case 6:
		case 7: { cout << year << " Рік червоного(ї) "; break; }
		case 8:
		case 9: { cout << year << " Рік жовтого(ї) "; break; }
		}

		de = (year + 8) % 12;//розрахунок починається з 8 року н.е.

		switch (de) {
		case 0: { cout << "щура " << endl; break; }
		case 1: { cout << "бика " << endl; break; }
		case 2: { cout << "тигра " << endl; break; }
		case 3: { cout << "кроля " << endl; break; }
		case 4: { cout << "дракона " << endl; break; }
		case 5: { cout << "змії " << endl; break; }
		case 6: { cout << "коня " << endl; break; }
		case 7: { cout << "вівці " << endl; break; }
		case 8: { cout << "мавпи " << endl; break; }
		case 9: { cout << "півня " << endl; break; }
		case 10: { cout << "собаки " << endl; break; }
		case 11: { cout << "свині " << endl; break; }

		}

	//}
}