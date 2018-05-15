#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void Quarter(double &x, double &y);

void Entering(double &x, double &y) {

	cout << "Внесіть координату Х: " << endl;
	cin >> x;
	
	cout << "Внесіть координату Y: " << endl;
	cin >> y;

}

void main()
{
	double x, y;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Entering(x, y);
	Quarter(x, y);
}
	
void Quarter(double &x, double &y) {
	
	if (x > 0 && y > 0) {
		cout << "I квадрант на координатній площині" << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "II квадрант на координатній площині" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "III квадрант на координатній площині" << endl;
	}
	else if (x > 0 && y < 0) {
		cout << "IV квадрант на координатній площині" << endl;
	}
	else if (x == 0 && y == 0) {
		cout << "Початок координат" << endl;
	}
	else if (x == 0 && y != 0) {
		cout << "Координата x лежить на осі координат" << endl;
	}
	else if (x != 0 && y == 0) {
		cout << "Координата y лежить на осі координат" << endl;
	}
	else {
		cout << "Something wrong" << endl;
	}
	
}
