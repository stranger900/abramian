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
	
	cout << "Внесіть K (1 - 100): " << endl;
	cin >> size;
	
	int *arr = new int[size];

	srand(time(NULL));
	for (int i=1; i <= size; i++){
		arr[i] = rand() % 101; 
		cout << i << "\t" << arr[i] << endl;
		
		if (arr[i] > size) {  
			count = arr[i];
		}
		if (arr[i] == 0) {
			break;
		}
	}

	
	cout << endl;
	cout << "Число > К = " << count << endl;
	cout << endl;
	delete[] arr;
}