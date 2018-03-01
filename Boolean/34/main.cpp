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

	//Output

	cout << ((x+y)%2==0) << endl;
		
}