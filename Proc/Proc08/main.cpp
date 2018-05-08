#include<iostream>
#include <locale>
#include "windows.h"
#include <cmath> 

using namespace std;

int d, k;

void AddRightDigit(int d, int k) {
	int s = k;
	for (int i = 0; i < 2; i++) {
		s = s * 10 + d;
		cout << "Нове число = " << s << endl;
	}

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

	AddRightDigit(d, k);
}