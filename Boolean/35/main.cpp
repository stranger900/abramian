#include<iostream>

using namespace std;

void main()
{
	int x, y, x1, y1;

	//Enter data
	cout << "Enter number X: " << endl;
	cin >> x;
	cout << "Enter number Y: " << endl;
	cin >> y;
	cout << "Enter number X1: " << endl;
	cin >> x1;
	cout << "Enter number Y1: " << endl;
	cin >> y1;

	//Output

	cout << (((x + y) % 2 == 0) == ((x1 + y1) % 2 == 0)) << endl;
		
}