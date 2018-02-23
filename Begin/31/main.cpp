#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a;
	
	
	//Enter data
	cout << "Enter the Fahrenheit scale of temperature: " << endl; 
	cin >> a;
	
	
	//Output data 
	
	cout << "The Celsius scale of temperature: " << ((a - 32)*5)/9 << endl;

}