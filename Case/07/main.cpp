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
	cout << "Внесіть масу тіла: " << endl;
	cin >> a;
	
	cout << "Виберіть одиницю маси:" << endl;
	cout << endl;
	cout << "1. Кілограм " << endl;
	cout << "2. Міліграм " << endl;
	cout << "3. Грам " << endl;
	cout << "4. Тонна " << endl;
	cout << "5. Центнер " << endl;
	cout << endl;
	cin >> b;

	//Calculation and Output

	switch (b) {
		case 1: {
			cout << "Маса тіла : " << a << " кг" << endl;
			break;
		}
		case 2: {
			cout << "Маса тіла : " << a * 0.000001 << " кг" << endl;
			break;
		}
		case 3: {
			cout << "Маса тіла : " << a * 0.001 << " кг" << endl;
			break;
		}
		case 4: {
			cout << "Маса тіла : " << a * 1000 << " кг" << endl;
			break;
		}
		case 5: {
			cout << "Маса тіла : " << a * 100 << " кг" << endl;
			break;
		}
		
		default: {
			cout << "*** ПОМИЛКА ***" << endl;
		}
	}
	//system("pause");
}