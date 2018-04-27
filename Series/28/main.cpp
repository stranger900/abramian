#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, s = 0, k = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть N: " << endl;
	cin >> size;
	k = size;

	float *arr = new float[size];

	for (int i = 0; i < size; i++) {			
		cout << "Внесіть A[" << i << "]: " << endl;
		cin >> arr[i];
	}

	for (int m = 0; m < size; m++) {
		s = arr[m];
		cout << " s = " << s << " k = " << k << "\t A = " << pow(s, k) << endl;
		k--;
	}
	
	
	cout << endl;
	delete[] arr;
}