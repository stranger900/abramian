# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

double Fact2(int n);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(5);
	srand(time(NULL));


	for (double i = 0; i < arr.size(); i++) {
		arr[i] = rand() % 10;
	}

	
	for(auto index : arr) {
		cout << index << "\t ";
		cout << Fact2(index)<< endl;
	}
	cout << endl;	
	return 0;
}

double Fact2(int n)
{
	double rez = 1;
	if (n % 2 == 0) {
		for (int i = 2; i <= n; i+=2) {
			rez *= i;
		}
	}
	else if (n % 2 == 1) {
		for (int i = 1; i <= n; i += 2) {
			rez *= i;
		}
	}
	else {
		cout << "Something wrong" << endl;
	}
	return (rez);
}