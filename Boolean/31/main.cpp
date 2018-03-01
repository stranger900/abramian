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

	//Output

	cout << (a == b || b==c || a==c) << endl;
		
}