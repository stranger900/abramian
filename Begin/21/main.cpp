#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double x1, x2, x3, y1, y2, y3;
	
	//Enter data

	cout << "Enter X1: " << endl;
	cin >> x1;
	cout << "Enter Y1: " << endl;
	cin >> y1;
	cout << "Enter X2: " << endl;
	cin >> x2;
	cout << "Enter Y2: " << endl;
	cin >> y2;
	cout << "Enter X3: " << endl;
	cin >> x3;
	cout << "Enter Y3: " << endl;
	cin >> y3;

	//Calculation

	double ab, bc, ac, p, s;

	ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	p = (ab + bc + ac) / 2;
	s = sqrt(p*(p - ab)*(p - bc)*(p - ac));

	//Out data
	
	cout << "Perimetr = " << ab + bc + ac << endl;
	cout << "Area = " << s << endl;
}