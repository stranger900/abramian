﻿#include<iostream>

using namespace std;

void main()
{
	int x, y, x1, y1, x2, y2;

	//Enter data
	cout << "Enter number X: " << endl;
	cin >> x;
	cout << "Enter number Y: " << endl;
	cin >> y;
	cout << "Enter number X1: " << endl;
	cin >> x1;
	cout << "Enter number Y1: " << endl;
	cin >> y1;
	cout << "Enter number X2: " << endl;
	cin >> x2;
	cout << "Enter number Y2: " << endl;
	cin >> y2;

	//Output

	cout << (x>x1 && x<x2 && y<y1 && y>y2) << endl;
		
}