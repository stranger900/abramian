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

	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;

	//Out data
	
	cout << "Y = " << y << endl;
	
}