#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void Calc(double &a, double &b, int &op);

void Entering(double &a, double &b, int &op) {
	
	IfAequalZero:
	cout << "Внесіть число А (A != 0): " << endl;
	cin >> a;
	
	if (a == 0) { goto IfAequalZero; }

	IfBequalZero:
	cout << "Внесіть число В (B != 0): " << endl;
	cin >> b;

	if (b == 0) { goto IfBequalZero; }

	cout << "Внесіть число Op: " << endl;
	cout << "1 - віднімання " << endl;
	cout << "2 - множення " << endl;
	cout << "3 - ділення " << endl;
	cout << "4 - додавання " << endl;
	cin >> op;
}

void main()
{
	double a, b;
	int op;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Entering(a, b, op);
	Calc(a,b,op);
}
	
void Calc(double &a, double &b, int &op) {
	
	switch(op)
	{
	case 1:
	{
		cout << "Результат = " << a - b << endl;
		break;
	}
	case 2: {
		cout << "Результат = " << a*b << endl;
		break;
	}
	case 3: {
		cout << "Результат = " << a / b << endl;
		break;
	}
	default:
	{
		cout << "Результат = " << a + b << endl;
	}
	}

	
	
}
