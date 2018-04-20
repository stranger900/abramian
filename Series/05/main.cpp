#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	const int size = 10;
	//double *arr = new double[size];
	double arr[size];
	double sum = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	srand(time(NULL));
	for (int i=0; i<size;i++){
		arr[i] = (0.1 * (rand() % 10)) + (rand() % 10);
		sum += (int)arr[i];

		cout << fixed;
		cout.precision(1);
		cout << arr[i] << "\t"<< (double)(arr[i] - (arr[i] - (int)arr[i])) << endl;
	}

	//delete[]arr;
	cout << "Сума = " << sum  << endl;
	cout << endl;

}