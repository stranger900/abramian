#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double a, b, x, y;
	
	
	//Enter data
	cout << "Enter X: " << endl; 
	cin >> x;
	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter Y: " << endl;
	cin >> y;
	cout << "Enter B: " << endl;
	cin >> b;
	
	//Output data 
	
	cout << "1 kg choco sweets costs : " << a / x << endl;
	cout << "1 kg sweets costs : " << b / y << endl;
	cout << "How many times choco sweets more expensive sweets : " << (a / x) / (b / y) << endl;
}