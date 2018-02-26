#include<iostream>

using namespace std;

void main()
{
	int a, b;
	
	//Enter data
	cout << "Enter number of seconds : " << endl; 
	cin >> a;

	//Calculations

	b = (a / 60) / 60;

	//Output data 
	
	cout << "Time = " << b << " hour(s)" <<endl;
	
}