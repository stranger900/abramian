﻿#include<iostream>

using namespace std;

void main()
{
	int x1, y1, x2, y2;

	//Enter data
	cout << "Enter number 1: " << endl;
	cin >> x1;
	cout << "Enter number Y1: " << endl;
	cin >> y1;
	cout << "Enter number X2: " << endl;
	cin >> x2;
	cout << "Enter number Y2: " << endl;
	cin >> y2;

	//Output

	cout << (x1==x2 || y1==y2) << endl;
		
}