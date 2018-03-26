#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, dob = 1, sum = 1, sign=1;
	int n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		dob *= a;
		cout << i << ". Добуток = " << dob;
		sum += dob*sign;
		sign *= (-1);
		cout << "  Сума = " << sum << endl;
	}
	cout << endl;
	cout << "  Сума = " << sum << endl;
	cout << endl;
}