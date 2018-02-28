#include<iostream>

using namespace std;

void main()
{
	int a, b;

	//Enter data
	cout << "Enter number of day : " << endl;
	cin >> a;

	//Calculations

	b = (a + 3) % 7;

	//Output data 

	switch (b)
	{
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;

	}
}