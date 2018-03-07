#include<iostream>

using namespace std;

void main()
{
	int a, b, c;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;
	cout << "Enter number B: " << endl;
	cin >> b;
	cout << "Enter number C: " << endl;
	cin >> c;

	//Calculation and Output

	if (abs(b-a) > abs(c-a)) {
		cout << "Point C is closer. Distance from C to A = " << abs(c - a) << endl;
	}
	else if (abs(b - a) < abs(c - a)) {
		cout << "Point B is closer. Distance from B to A = " << abs(b - a) << endl;
	}
	else {
		cout << "Distances from B to A and from C to A are equal " << endl;
	}
}