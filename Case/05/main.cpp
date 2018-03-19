#include<iostream>
#include <locale>;
#include "windows.h";

using namespace std;

void main()
{
	int a, b, c;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Enter data
	cout << "Внесіть перше число: " << endl;
	cin >> a;
	cout << "Внесіть друге число (відмінне від нуля): " << endl;
	cin >> b;
	cout << "Виберіть операцію, яку потрібно здійснити:" << endl;
	cout << endl;
	cout << "1. Додавання " << endl;
	cout << "2. Віднімання " << endl;
	cout << "3. Множення " << endl;
	cout << "4. Ділення " << endl;
	cout << endl;
	cin >> c;

	//Calculation and Output

	switch (c) {
		case 1: {
			cout << "Результат рівний :" << a+b<<endl;
			break;
		}
		case 2: {
			cout << "Результат рівний :" <<a-b<< endl;
			break;
		}
		case 3: {
			cout << "Результат рівний :" <<a*b<< endl;
			break;
		}
		case 4: {
			cout << "Результат рівний :" << (double)a/b<<endl;
			break;
		}
		
		default: {
			cout << "*** ПОМИЛКА ***" << endl;
		}
	}
	//system("pause");
}