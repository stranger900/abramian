#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, rez=2, dob=1 ;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N : " << endl;
	cin >> n;
	
	cout << endl;
	rez = n;
	while (rez>0) {
		dob *= rez;
		rez -= 2;
		//cout << "dob = "<<dob << "\trez = " << rez << endl;
		if (rez < 2) { break; }
	}
	
	cout <<"N!! = "<< dob << endl;
	cout << endl;
}