#include<iostream>

using namespace std;

void main()
{
	int a, b, c, countPlus = 0, countMinus = 0;

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
		countPlus++;
	}
	else
	{
		countMinus++;
	}
	if (b > 0)
	{
		countPlus++;
	}
	else
	{
		countMinus++;
	}
	if (c > 0)
	{
		countPlus++;
	}
	else
	{
		countMinus++;
	}
	cout << "positive numbers : " << countPlus << endl;
	cout << "negative numbers : " << countMinus << endl;
}