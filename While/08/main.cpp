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
		dob = a*a;
		a++;
		if (dob == n || (dob < n && (a*a)>n)) {
			cout << "K = " << dob << endl;
			break;
		}
		//cout << "dob = "<< dob << "\t a = " << a << endl;
		
	}

	//cout << "K = " << dob << endl;
	cout << endl;
}