#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double a, b, h, n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 1) : " << endl;
	cin >> n;
	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число B : " << endl;
	cin >> b;

	h = (b - a) / n;
	cout << endl;
	cout <<"H = "<< h << endl;
	cout << endl;

	for (double i = 0; i <= b ; i+=h) {
		double rez = a + i;
		cout << "F(x) = "<<1-sin(rez)<<"\t A + H = "<< rez << endl;
	}
	
	cout << endl;
}