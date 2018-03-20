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

	switch (d) {
	case 2: {
		cout << "Двадцять ";
		break;
	}
	case 3: {
		cout << "Тридцять ";
		break;
	}
	case 4: {
		cout << "Сорок ";
		break;
	}
	case 5: {
		cout << "П'ятдесят ";
		break;
	}
	case 6: {
		cout << "Шістдесят ";
		break;
	}
	
	default: {
		cout << "Something wrong 1" << endl;
	}
	}

	switch (o) {
	case 0: 	break;
	case 1: {
		cout << "один ";
		break;
	}
	case 2: {
		cout << "два ";
		break;
	}
	case 3: {
		cout << "три ";
		break;
	}
	case 4: {
		cout << "чотири ";
		break;
	}
	case 5: {
		cout << "п'ять ";
		break;
	}
	case 6: {
		cout << "шість ";
		break;
	}
	case 7: {
		cout << "сім ";
		break;
	}
	case 8: {
		cout << "вісім ";
		break;
	}
	case 9: {
		cout << "дев'ять ";
		break;
	}
	default: {
		cout << "Something wrong 2" << endl;
	}
	}

	switch (o) {
	case 1: {
		cout << "рік " << endl;
		break;
	}
	case 2: 
	case 3: 
	case 4: {
		cout << "роки " << endl;
		break;
	}
	case 5: 
	case 6: 
	case 7: 
	case 8:
	case 9:
	case 0: {
		cout << "років " << endl;
		break;
	}
	default: {
		cout << "Something wrong 3" << endl;
	}
	}
}