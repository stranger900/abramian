#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b;
	
	//Enter data

	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter B: " << endl;
	cin >> b;

	//Calculation

	double p = a;
	a = b;
	b = p;

	//Out data
	
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}