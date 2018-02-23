#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, x, y;
	
	
	//Enter data
	cout << "Enter X: " << endl; 
	cin >> x;
	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter Y: " << endl;
	cin >> y;
	
	//Output data 
	
	cout << "1 kg sweets costs : " << a / x  << endl;
	cout << "Y kg sweets costs : " << (a / x) * y << endl;

}