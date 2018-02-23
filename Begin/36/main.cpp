#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double v1, v2, s, t;
	
	
	//Enter data
	cout << "Enter V1: " << endl; 
	cin >> v1;
	cout << "Enter V2: " << endl;
	cin >> v2;
	cout << "Enter S: " << endl;
	cin >> s;
	cout << "Enter T: " << endl;
	cin >> t;

	//Output data 
	
	cout << "S = " << s + (t * (v1 + v2)) << endl;
	
}