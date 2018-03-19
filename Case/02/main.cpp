#include<iostream>
#include<string>

using namespace std;

void main()
{
	int a;

	//Enter data
	cout << "Enter number: " << endl;
	cin >> a;

	//Calculation and Output

	switch (a) {
		case 1:
		{
			cout << "badly" << endl;
			break;
		}
		case 2: {
			cout << "unsatisfactorily" << endl;
			break;
		}
		case 3: {
			cout << "satisfactorily" << endl;
			break;
		}
		case 4: {
			cout << "good" << endl;
			break;
		}
		case 5: {
			cout << "perfectly" << endl;
			break;
		}
		default: {
			cout << "Something wrong" << endl;
		}
	}
}