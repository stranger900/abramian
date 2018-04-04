#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int a, b, c=0, d=0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A (A > B): " << endl;
	cin >> a;
	cout << "Внесіть число B : " << endl;
	cin >> b;
	cout << endl;
	c = a;
	while (b <= c && c > 0) {
		c -= b;
		
	}
	cout << c << endl;
	cout << endl;
}