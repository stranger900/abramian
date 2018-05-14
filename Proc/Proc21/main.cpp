#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void SumRange(int a, int b);

void Entering(int &a, int &b, int &c) {
	char ifEnterC = 'm';
	cout << "Внесіть число А: " << endl;
	cin >> a;
	
	cout << "Внесіть число В: " << endl;
	cin >> b;

	cout << "Бажаєте внести число С ?" << endl;
	cout << "якщо так - натисніть 'y' " << endl;
	cin >> ifEnterC;
	if (ifEnterC == 'y' || ifEnterC == 'Y') {
		cout << "Внесіть число C: " << endl;
		cin >> c;
	}
}

void main()
{
	int a, b, c = 0;
	int *pa = &a, *pb = &b, *pc = &c;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Entering(a, b, c);
	SumRange(a, b);
	SumRange(a, c);
}
	
void SumRange(int a, int b) {
	
	if (a > b) {
		cout << 0 << endl;
	}
	else if(a < b){
		int sumAB = 0;
		for (int i = a; i <= b; i++) {
			sumAB += i;
		}
		cout <<"Сума = "<< sumAB << endl;
	}
	
	
}
