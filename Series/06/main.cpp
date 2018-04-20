#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size;
	
	//double arr[size];
	double dob = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	cout << "Внесіть N : " << endl;
	cin >> size;

	double *arr = new double[size];

	srand(time(NULL));
	for (int i=0; i<size;i++){
		arr[i] = (0.1 * (rand() % 10)) + (rand() % 10);
		dob *= arr[i];

		cout << fixed;
		cout.precision(1);
		cout << arr[i] << "\t"<< (arr[i] - (int)arr[i]) << endl;
	}

	delete[] arr;
	cout << "Добуток = " << dob  << endl;
	cout << endl;

}