﻿#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, sum = 0, previousZero = 0, lastZero = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть N (1 - 100): " << endl;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++) {				// entering array
		cout << "Внесіть A[" << i << "]: " << endl;
		cin >> arr[i];
	}

	//for (int i = 0; i < size; i++) {               // find firsZero
	//	if (arr[i] == 0) { firstZero = i; break; }
	//}

	for (int j = size; j > 0; j--) {			  //find lastZero
		if (arr[j] == 0) { lastZero = j; break; }
	}
	
	for (int m = lastZero - 1; m > 0; m--) {			  //find previousZero
		if (arr[m] == 0) { previousZero = m; break; }
	}

	for (int k = previousZero; k < lastZero; k++) {
		sum += arr[k];
	}
	
	cout << sum << endl;
	cout << endl;
	delete[] arr;
}