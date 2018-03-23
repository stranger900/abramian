#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, count = 0, d = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (double i=1.1; count < n; i+=0.1) {
		
		//cout <<  "i = " << i << endl;
		
		if (((int)(i*10))%2 == 0) {d -= i; cout << "i = " << i << "  Сума = " << d <<endl;}
		else { d += i; cout << "i = " << i << "  Сума = " << d << endl;}
		count += 1;
	}
	cout << endl;
	cout << "Множників = " << n << endl;
	cout << "Сума = " << d << endl;
	cout << endl;
}