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

	if (x > 0 && y > 0) {
		cout << "Coordinate quarter is I" << endl;
	}
	else if (x < 0 && y>0) {
		cout << "Coordinate quarter is II" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "Coordinate quarter is III" << endl;
	}
	else if (x > 0 && y < 0) {
		cout << "Coordinate quarter is IV" << endl;
	}
	else if (x == 0 && y == 0) {
		cout << "The point is lying in the centre of coordinate area " << endl;
	}
	else {
		cout << "Something wrong" << endl;
	}
}