#include<iostream>

using namespace std;

void main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;

	//Enter data
	cout << "Enter number X1: " << endl;
	cin >> x1;
	cout << "Enter number Y1: " << endl;
	cin >> y1;
	cout << "Enter number X2: " << endl;
	cin >> x2;
	cout << "Enter number Y2: " << endl;
	cin >> y2;
	cout << "Enter number X3: " << endl;
	cin >> x3;
	cout << "Enter number Y3: " << endl;
	cin >> y3;

	//Calculation and Output

	if (x1 == x2) {
		x4 = x3;
	}
	else if (x2 == x3) {
		x4 = x1;
	}
	else if (x1 == x3) {
		x4 = x2;
	}
	else {
		cout << "Something wrong" << endl;
	}

	if (y1 == y2) {
		y4 = y3;
	}
	else if (y1 == y3) {
		y4 = y2;
	}
	else if (y2 == y3) {
		y4 = y1;
	}
	else {
		cout << "Something wrong" << endl;
	}
	cout << "Coordinates of point 4 are: x4 = " << x4 << ", y4 = " << y4 << endl;
}