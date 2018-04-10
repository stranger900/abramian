#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, b, dob, i;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число A (A < B) : " << endl;
	cin >> a;
	cout << "Внесіть число B : " << endl;
	cin >> b;
	cout << endl;

	i = b - a;
	dob = a;
	while (i>0) {
		a++;
		dob *= a;
		//cout << "dob = "<<dob << "\t i = "<< i << endl;
		--i;
	}
	
	cout <<"Добуток = "<< dob << endl;
	cout << endl;
}