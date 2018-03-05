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
		cout << "Bigger number is: " << a << endl;
	}
	else if (a==b)
	{
		cout << "A is equal B " << endl;
	}
	else
	{
		cout << "Bigger number is: " << b << endl;
	}
}