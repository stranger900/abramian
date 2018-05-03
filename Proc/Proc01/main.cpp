#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

double PowerA3(double b) {
	
	return b*b*b;
}

void main()
{
	double a;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть A: " << endl;
	cin >> a;

	cout << PowerA3(a) << endl;
	
}