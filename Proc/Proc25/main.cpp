﻿#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime>

using namespace std;

bool Even(int *arr, const int &size, int &count, int &k);

void Entering(int &k) {

	cout << "Внесіть число К (1-10): " << endl;
	cin >> k;
	
}

void main()
{
	const int size = 10;
	int arr[size];
	int count = 0, k = 0;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
	Entering(k);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;
	if (Even(arr, size, count, k)) {
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}
	cout << "Кількість квадратів в масиві = " << count << endl;
}
	
bool Even(int *arr, const int &size, int &count, int &k) {
	bool b = false;
	for (int j = 0; j < size; j++) {
		if (sqrt(k)==arr[j]) {
			count++;
			b = true;
		}
	}
	return b;
}
