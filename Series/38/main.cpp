﻿#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int sizeK, sizeN = 1000, number = 0, countUp = 0, countTotal = 0, countInArray = 0, countDown = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Внесіть K: " << endl;
	cin >> sizeK;

	srand(time(NULL));

	int **arr = new int* [sizeK];

	for (int i = 0; i < sizeK; i++) {			
		arr[i] = new int[sizeN];
	}
	////////////////////////////// 

	for (int i = 0; i < sizeK; i++) {
		for (int j = 0; j < sizeN; j++) {
			arr[i][j] = rand() % 20;
			countInArray++;
			if (arr[i][0] == 0 || arr[i][1] == 0) { continue; }
			if (arr[i][j - 1] <= arr[i][j]) { countUp++; }
			if (arr[i][j - 1] >= arr[i][j]) { countDown++; }
			if (arr[i][j] == 0) { break;}
			
			//cout << "arr ["<<i + 1 <<"]["<< j + 1 <<"] = " << arr[i][j] << endl;
		}
		cout << endl;
		if ((countUp > 0) && ((countUp + 1) >= countInArray)) {
			countTotal++;
			cout << 1 << endl;
		}
		else if (countDown > 0 && (countDown + 1) >= countInArray) {
			cout << -1 << endl;
		}
		else {
			cout << 0 << endl;
		}
		countUp = 0;
		countDown = 0;
		countInArray = 0;

	}
	
	//////////////////////////////
	for (int i = 0; i < sizeK; i++) {
		delete[] arr[i];
	}
	cout << endl;
	delete[] arr;
}