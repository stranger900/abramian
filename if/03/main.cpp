﻿#include<iostream>

using namespace std;

void main()
{
	int a;

	//Enter data
	cout << "Enter number: " << endl;
	cin >> a;

	//Output

	if (a > 0)
	{
		cout << a + 1 << endl;
	}
	else if(a == 0)
	{
		a = 10;
		cout << a << endl;
	}
	else
	{
		cout << a - 2 << endl;
	}
		
}