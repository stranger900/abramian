#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, sum = 0, i = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	while (i <= n) {
		sum += (2 * i - 1);
		cout << "sum = "<<sum << "\t i = "<< i << endl;
		i++;
	}
	cout << endl;
	cout <<"Сума = "<< sum << endl;
	cout << endl;
}