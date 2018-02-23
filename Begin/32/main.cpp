#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a;
	
	
	//Enter data
	cout << "Enter the Celsius scale of temperature: " << endl; 
	cin >> a;
	
	
	//Output data 
	
	cout << "The Fahrenheit scale of temperature: " << a * 9 / 5 + 32  << endl;

}