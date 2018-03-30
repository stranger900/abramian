#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double x, rez, sum = 1, dob = 1, diln = 1;
	int n, sign = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число X (X<1): " << endl;
	cin >> x;
	cout << "Внесіть число N (N > 0): " << endl;
	cin >> n;

	//sum = x;
	//dob = x;
	for (int i = 2; i <= (2*n); i+=2) {
		diln *= i;
		dob *= x;
		
		rez = sign * dob / diln;
		sum += rez;
		sign *= -1;
		//cout << "dob = " << dob << "diln = " << diln <<"rez = "<< rez << endl;
		//cout << "sum = " << sum << endl;
		
	}
	cout << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	cout << "sqrt(1+x) = " << sqrt(1+x) << endl;
}