﻿#include<iostream>

using namespace std;

void main()
{
	int a, b;

	//Enter data
	cout << "Enter number of seconds : " << endl;
	cin >> a;

	//Calculations

	b = (a % 3600);

	//Output data 

	cout << "Time = " << b << " second(s)" << endl;

}