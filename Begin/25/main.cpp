#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double x, y;
	
	//Enter data

	cout << "Enter x: " << endl;
	cin >> x;
	
	//Calculation

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	//Out data
	
	cout << "Y = " << y << endl;
	
}