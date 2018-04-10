#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, sum =0, i;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	i = n;
	while (i >= 0) {
		sum += (n + i)*(n + i);
		cout << "sum = "<<sum << "\t i = "<< i << endl;
		--i;
	}
	
	cout <<"Сума = "<< sum << endl;
	cout << endl;
}