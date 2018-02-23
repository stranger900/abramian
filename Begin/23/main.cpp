#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b, c;
	
	//Enter data

	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter B: " << endl;
	cin >> b;
	cout << "Enter C: " << endl;
	cin >> c;

	//Calculation

	double p = c;
	c = b;
	b = a;
	a = p;

	//Out data
	
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "C = " << c << endl;
}