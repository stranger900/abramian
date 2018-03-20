#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int m, n;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть номер масті : " << endl;
	cout << "1. - піки" << endl;
	cout << "2. - хреста" << endl;
	cout << "3. - дзвінка" << endl;
	cout << "4. - чирва" << endl;
	cin >> m;
	cout << "Внесіть вартість карти (6-14) " << endl;
	cin >> n;

	switch (n) {
	case 6: {
		cout << "шість ";
		break;
	}
	case 7: {
		cout << "сім ";
		break;
	}
	case 8: {
		cout << "вісім ";
		break;
	}
	case 9: {
		cout << "девять ";
		break;
	}
	case 10: {
		cout << "десять ";
		break;
	}
	case 11: {
		cout << "валет ";
		break;
	}
	case 12: {
		cout << "дама ";
		break;
	}
	case 13: {
		cout << "король ";
		break;
	}
	case 14: {
		cout << "туз ";
		break;
	}
	
	default: {
		cout << "Something wrong" << endl;
	}
	}

	switch (m) {
	case 1: {
		cout << "піки " << endl;
		break;
	}
	case 2: {
		cout << "хреста " << endl;
		break;
	}
	case 3: {
		cout << "дзвінки " << endl;
		break;
	}
	case 4: {
		cout << "чирва " << endl;
		break;
	}
	default: {
		cout << "Ви внесли неправильний номер, внесіть номер від 1 до 4" << endl;
		break;
	}
	}
}