#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int a, b, n1, n2;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть напрямок руху : " << endl;
	cout << "1. - Схід" << endl;
	cout << "2. - Південь" << endl;
	cout << "3. - Захід" << endl;
	cout << "4. - Північ" << endl;
	cin >> a;
	cout << "Внесіть команду 1: " << endl;
	cout << "0 - продовжувати рух " << endl;
	cout << "1 - поворот праворуч " << endl;
	cout << "-1 - поворот ліворуч " << endl;
	cin >> n1;
	cout << "Внесіть команду 2: " << endl;
	cout << "0 - продовжувати рух " << endl;
	cout << "1 - поворот праворуч " << endl;
	cout << "-1 - поворот ліворуч " << endl;
	cin >> n2;

	b = (a + (n1 + n2));
	if (b > 4) {
		b = b % 4;
	}
	if (b < 0) {
		b = 4 - (abs(b) % 4);
	}
	if (b == 0) {
		b = 4;
	}

	switch (b) {
	case 1: {
		cout << "напрямок руху на СХІД "<<endl;
		break;
	}
	case 2: {
		cout << "напрямок руху на ПІВДЕНЬ "<<endl;
		break;
	}
	case 3: {
		cout << "напрямок руху на ЗАХІД "<<endl;
		break;
	}
	case 4: {
		cout << "напрямок руху на ПІВНІЧ "<<endl;
		break;
	}
	default: {
		cout << "Something wrong" << endl;
	}
	}

}