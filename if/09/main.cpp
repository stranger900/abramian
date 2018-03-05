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
	
	//Output

	if (a > b)
	{
		c = a;
		a = b;
		b = c;
		cout << "A = " << a << " B = " << b << endl;
	}
	else if (a==b)
	{
		cout << "A is equal B " << endl;
	}
	else
	{
		cout << "A = " << a << " B = " << b << endl;
	}
}