#include<iostream>

using namespace std;

void main()
{
	int a;
	
	//Enter data
	cout << "Enter two-digit number : " << endl; 
	cin >> a;

	//Output data 
	
	cout << "dozen = " << a/10 << " units = " << a%10 <<endl;
	
}