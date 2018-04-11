#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, a = 1, dob = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	cout << endl;
	
	while (true) {
		dob = a * a;
		a++;
		//cout << "dob = "<< dob << "\t a = " << a << endl;
		if (dob > n) { break; }
	}

	cout << "K = " << dob << endl;
	cout << endl;
}