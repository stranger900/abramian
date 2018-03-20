#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	char a;
	int b;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть напрямок руху : " << endl;
	cout << "E (East)" << endl;
	cout << "W (West)" << endl;
	cout << "N (North)" << endl;
	cout << "S (South)" << endl;
	cout << "Примітка: потрібно використовувати ВЕЛИКІ літери" << endl;
	cin >> a;
	cout << "Внесіть команду : " << endl;
	cout << "0 - продовжувати рух " << endl;
	cout << "1 - поворот праворуч " << endl;
	cout << "-1 - поворот ліворуч " << endl;
	cin >> b;

	switch (a) {
	case 'E': {
		cout << "напрямок руху на СХІД, ";
		break;
	}
	case'W': {
		cout << "напрямок руху на ЗАХІД, ";
		break;
	}
	case 'N': {
		cout << "напрямок руху на ПІВНІЧ, ";
		break;
	}
	case 'S': {
		cout << "напрямок руху на ПІВДЕНЬ, ";
		break;
	}
	}

	switch (b) {
	case 0: {
		cout << "продовжує рух" << endl;
		break;
	}
	case 1: {
		cout << "повернув ліворуч" << endl;
		break;
	}
	case -1: {
		cout << "повернув праворуч" << endl;
		break;
	}
	}
}