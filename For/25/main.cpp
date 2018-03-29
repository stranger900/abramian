#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x,  rez, sum = 0, factorial = 1, dob = 1;
	int n, sign = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число X (X>0 & X<1): " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;
	
	//sum = x;
	dob = 1;
	for (int i = 1; i <= n; i++) {
		
		dob *= x;

		rez = sign*dob / i;
		sum += rez;
		sign *= (-1);
		cout << "x^n = " <<dob<<" / "<<i<< " = "<< rez << endl;
		cout << "sum = " << sum << endl;
		
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	cout << "log(x+1) = " << log(x + 1) << endl;
}