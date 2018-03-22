#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int a, b, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число А : " << endl;
	cin >> a;
	cout << "Внесіть число B : " << endl;
	cin >> b;

	for (a; a <= b; a++) {
		cout << "ціле число " << a << endl;
		count += a;
	}
	cout << "Сума всіх цілих чисел = " << count << endl;
}