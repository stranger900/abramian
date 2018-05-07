#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath> 

using namespace std;

double arr[5] = { 0 };

void DigitCountSum( int k, int c = 0, double s = 0) {

	for (int i = 0; i < k; i++) {
		s += k % 10;
		k /= 10;
		c++;
		if (k < 0) {
			break;
		}
	}

	cout << "Кількість = " << c << endl;
	cout << "Сума = " << s << endl;
	cout << endl;
}

void Entering() {

	for (int i = 0; i < 5; i++) {
		cout << "Внесіть цифру " << i << " :  " << endl;
		cin >> arr[i];
	}
}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering();

	for (int j = 0; j < 5; j++) {
		DigitCountSum(arr[j]);
	}
}