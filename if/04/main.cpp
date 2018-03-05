#include<iostream>

using namespace std;

void main()
{
	int a, b, c, count = 0;

	//Enter data
	cout << "Enter number A: " << endl;
	cin >> a;
	cout << "Enter number B: " << endl;
	cin >> b;
	cout << "Enter number C: " << endl;
	cin >> c;

	//Output

	if (a > 0)
	{
		count++;
	}if (b > 0)
	{
		count++;
	}if (c > 0)
	{
		count++;
	}
	cout << count << endl;
}