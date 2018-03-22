#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть вартість цукорок за 1 кг : " << endl;
	cin >> a;

	for (double i = 0.1; i <= 1; i+=0.1) {
		cout << "Вартість " << i << " кг цукерок = " << i*a << endl;
	}
	
}