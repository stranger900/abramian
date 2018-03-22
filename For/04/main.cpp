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

	for (int i = 1; i <= 10; i++) {
		cout << "Вартість " << i << " кг цукерок = " << i*a << endl;
	}
	
}