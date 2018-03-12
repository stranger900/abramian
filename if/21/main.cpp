#include<iostream>

using namespace std;

void main()
{
	int x, y;

	//Enter data
	cout << "Enter number X: " << endl;
	cin >> x;
	cout << "Enter number Y: " << endl;
	cin >> y;

	//Calculation and Output

	if (x == 0 && y == 0) {
		cout << "Result = " << 0 << endl;
	}
	else if (y == 0) {
		cout << "Result = " << 1 << endl;
	}
	else if (x == 0) {
		cout << "Result = " << 2 << endl;
	}
	else {
		cout << "Result = " << 3 << endl;
	}
}