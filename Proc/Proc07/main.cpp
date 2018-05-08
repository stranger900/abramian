#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath> 

using namespace std;

const int sizeArray = 5;
double arr[sizeArray] = { 0 };

void InvertDigits( int k) {
	int lastDigit = 0, newDigit = 0;
	for (int i = 0; i < 100000000; i++) {
		lastDigit = k % 10;
		k /= 10;
		newDigit = newDigit * 10 + lastDigit;
		//cout << " *** newDigit = " << newDigit << endl;
		if (k <= 0) {
			break;
		}
	}

	cout << "Нове число  = " << newDigit << endl;
	cout << endl;
}

void Entering() {

	for (int i = 0; i < sizeArray; i++) {
		cout << "Внесіть цифру " << i << " :  " << endl;
		cin >> arr[i];
	}
}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Entering();

	for (int j = 0; j < sizeArray; j++) {
		InvertDigits(arr[j]);
	}
}