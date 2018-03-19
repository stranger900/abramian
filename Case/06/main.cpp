#include<iostream>
#include <locale>;
#include "windows.h";

using namespace std;

void main()
{
	double a;
	int b;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Enter data
	cout << "Внесіть довжину відрізка: " << endl;
	cin >> a;
	
	cout << "Виберіть одиницю довжини:" << endl;
	cout << endl;
	cout << "1. Дециметр " << endl;
	cout << "2. Кілометр " << endl;
	cout << "3. Метр " << endl;
	cout << "4. Міліметр " << endl;
	cout << "5. Сантиметр " << endl;
	cout << endl;
	cin >> b;

	//Calculation and Output

	switch (b) {
		case 1: {
			cout << "Довжина відрізка : " << a * 0.1 << " метрів" << endl;
			break;
		}
		case 2: {
			cout << "Довжина відрізка : " << a * 1000 << " метрів" << endl;
			break;
		}
		case 3: {
			cout << "Довжина відрізка : " << a  << " метрів" << endl;
			break;
		}
		case 4: {
			cout << "Довжина відрізка : " << a * 0.001 << " метрів" << endl;
			break;
		}
		case 5: {
			cout << "Довжина відрізка : " << a * 0.01 << " метрів" << endl;
			break;
		}
		
		default: {
			cout << "*** ПОМИЛКА ***" << endl;
		}
	}
	//system("pause");
}