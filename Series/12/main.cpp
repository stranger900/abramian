#include<iostream>
#include <locale>
#include "windows.h"
#include <ctime> 

using namespace std;

void main()
{
	int size, count = 0;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть N : " << endl;
	cin >> size;
	
	int *arr = new int[size];

	srand(time(NULL));
	for (int i=1; i <= size; i++){
		arr[i] = 50 - rand() % 101; //число від -50 до +50
		cout << i << "\t" << arr[i] << endl;
		count++;
		if (arr[i] == 0) {  
			break;
		}
	}

	
	cout << endl;
	cout << "Кількість = " << count << endl;
	cout << endl;
	delete[] arr;
}