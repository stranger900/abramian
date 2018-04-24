#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, count = 1;
	double b;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть B: " << endl;
	cin >> b;
	cout << "Внесіть N (1 - 100): " << endl;
	cin >> size;
	
	float *arr = new float[size];

	for (int i=1; i <= size; i++){
		arr[i] = count + b;
		cout << i << "\t" << arr[i] << endl;
		count++;
	}

	cout << endl;
	delete[] arr;
}