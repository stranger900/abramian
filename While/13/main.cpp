#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	double n, sum = 0, i = 1.1, i1 = 1, sign = 1, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть число N (N > 0) : " << endl;
	cin >> n;
	cout << endl;

	while (count < n) {
		sum += sign * i;
		//cout << "sum = "<<sum << "\t i = "<< i << " sign = " << sign << " count = " << count <<  endl;
		i1 = i;
		i += 0.1;
		sign *= (-1);
		count++;
	}
	
	cout <<"Сума = "<< sum << endl;
	cout << endl;
}