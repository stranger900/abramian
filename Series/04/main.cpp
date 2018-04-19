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
	double sum = 0, dob = 1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	srand(time(NULL));
	for (int i=0; i<size;i++){
		arr[i] = 0.1 * (rand() % 10);
		sum += arr[i];
		dob *= arr[i];
		cout << arr[i] << endl;
	}

	//delete[]arr;
	cout << "Сума = " << sum << "\tДобуток = " << dob << endl;
	cout << endl;

}