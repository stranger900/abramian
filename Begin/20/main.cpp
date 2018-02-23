#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	
	//Enter data

	cout << "Enter X1: " << endl;
	cin >> x1;
	cout << "Enter Y1: " << endl;
	cin >> y1;
	cout << "Enter X2: " << endl;
	cin >> x2;
	cout << "Enter Y2: " << endl;
	cin >> y2;
	
	//Out data
	
	cout << "Length = " << sqrt(pow(x2-x1,2) + pow(y2-y1,2)) << endl;
	
}