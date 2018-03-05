#include<iostream>

using namespace std;

void main()
{
	int a, b;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;
	cout << "Enter number B: " << endl;
	cin >> b;
	
	//Output

	if (a > b)
	{
		cout << "Less number is B, number " << 2 << endl;
	}
	else if (a==b)
	{
		cout << "A is equal B " << endl;
	}
	else
	{
		cout << "Less number is A, number " << 1 << endl;
	}
}