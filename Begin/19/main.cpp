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
	
	//Сalculation
	
	int ab, ac;
	ab = abs(x1 + x2);
	ac = abs(y1 + y2);
	
	//Out data
	
	cout << "Perimetr = " << ab * 2 + ac * 2 << endl;
	cout << "Area = " << ab * ac << endl;
	
}