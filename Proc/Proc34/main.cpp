# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

double Fact(int n);
 
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
		cout << Fact(index)<< endl;
	}
	cout << endl;	
	return 0;
}

double Fact(int n)
{
	double rez = 1;
	for (int i = 1; i <= n; i++) {
		rez *= i;
	}
	return (rez);
}