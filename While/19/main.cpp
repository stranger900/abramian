#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N: " << endl;
	cin >> n;
	cout << endl;

	while (n>0) {
		cout << n % 10;
		n = n / 10;
	}
	cout << endl;
}