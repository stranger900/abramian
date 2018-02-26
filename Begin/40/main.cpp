#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a1, b1, c1, a2, b2, c2;
	
	//Enter data
	cout << "Enter A1 : " << endl; 
	cin >> a1;
	cout << "Enter B1: " << endl;
	cin >> b1;
	cout << "Enter C1: " << endl;
	cin >> c1;
	cout << "Enter A2 : " << endl;
	cin >> a2;
	cout << "Enter B2: " << endl;
	cin >> b2;
	cout << "Enter C2: " << endl;
	cin >> c2;

	//Calculation
	
	double d, y, x;
	d = a1*b2 - b1*a2;
	x = (c1 * b2 - c2 * b1) / d;
	y = (a1*c2 - a2*c1) / d;

	//Output data 
	
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
}