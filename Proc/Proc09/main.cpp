#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath>
#include <string>

using namespace std;

int d, k;

void AddLeftDigit(int d, int k) {
	int count = 1;
	int newDigit = k;

	while (k) {
		k /= 10;
		count*=10;
	}

	newDigit += d*count ;
	cout << "Нове число = " << newDigit << endl;
	newDigit += d*count * 10;
	cout << "Нове число = " << newDigit << endl;

}

void Entering() {

	enterNumber:
	cout << "Внесіть цифру D : (0 - 9)" << endl;
	cin >> d;
	if (d > 9) {
		cout << " ***** Число D більше 9 ***** " << endl;
		goto enterNumber;
	}
	cout << "Внесіть цифру K :  " << endl;
	cin >> k;
	
}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering();

	AddLeftDigit(d, k);
}