#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int d, n, o;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть номер : " << endl;
	cin >> n;

	d = n / 10;
	o = n % 10;

	if (n < 20) {
		switch (n) {
		case 10: {cout << "Десять учбових завдань"<<endl; } break;
		case 11: {cout << "Одинадцять учбових завдань"<<endl; } break;
		case 12: {cout << "Дванадцять учбових завдань"<<endl; } break;
		case 13: {cout << "Тринадцять учбових завдань"<<endl; } break;
		case 14: {cout << "Чотирнадцять учбових завдань"<<endl; } break;
		case 15: {cout << "П'ятнадцять учбових завдань"<<endl; } break;
		case 16: {cout << "Шістнадцять учбових завдань"<<endl; } break;
		case 17: {cout << "Сімнадцять учбових завдань"<<endl; } break;
		case 18: {cout << "Вісімнадцять учбових завдань"<<endl; } break;
		case 19: {cout << "Девятнадцять учбових завдань"<<endl; } break;
		}
	}
	else {
		switch (d) {
		case 2: {cout << "Двадцять ";break;}
		case 3: {cout << "Тридцять ";break;}
		case 4: {cout << "Сорок ";	break;}
		case 5: {cout << "П'ятдесят ";break;}
		case 6: {cout << "Шістдесят ";break;}
		default: {cout << "Something wrong 1" << endl;}
		}

		switch (o) {
		case 0: {cout << "учбових завданнь " << endl; break; }
		case 1: {cout << "одне учбове завдання " << endl; break;}
		case 2: {cout << "два учбових завдань" << endl;	break;}
		case 3: {cout << "три учбових завдань" << endl;	break;}
		case 4: {cout << "чотири учбових завдань" << endl; break;}
		case 5: {cout << "п'ять учбових завдань" << endl; break;}
		case 6: {cout << "шість учбових завдань" << endl; break;	}
		case 7: {cout << "сім учбових завдань" << endl;	break; }
		case 8: {cout << "вісім учбових завдань" << endl; break;}
		case 9: {cout << "дев'ять учбових завдань" << endl;	break;}
		default: {cout << "Something wrong 2" << endl;}
		}
	}
	
}