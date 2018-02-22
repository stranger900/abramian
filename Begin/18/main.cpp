#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b, c;
	
	//Vvod

	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter C: " << endl;
	cin >> c;
	cout << "Enter B: " << endl;
	cin >> b;
	
	//Vyvod
	
	cout << "AC = " << abs(c - a)<< endl;
	cout << "BC = " << abs(c - b) << endl;
	cout << "AC - BC = " << abs(c - a) - abs(c - b) << endl;
}