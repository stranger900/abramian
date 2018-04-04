#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int a, b, c;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число B (B > A): " << endl;
	cin >> b;
	cout << endl;

	c = b - a;
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}

	cout << endl;
}