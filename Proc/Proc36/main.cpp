# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

double Fib(int n);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//srand(time(NULL));
	
	int n;
	cout << "Внесіть число N : " << endl;
	cin >> n;
	cout << endl;

	Fib(n);
	return 0;
}

double Fib(int n)
{
	int iFirstDigit = 1;
	int iSecondDigit = 1;
	int iResult = 0;
	while (iResult < n) {
		iResult = iFirstDigit + iSecondDigit;
		iFirstDigit = iSecondDigit;
		iSecondDigit = iResult;

	}
	for (int iIndex = 0; iIndex < 5; iIndex++) {
		cout << (iIndex+1) << "\t" << iResult << endl;
		iResult = iFirstDigit + iSecondDigit;
		iFirstDigit = iSecondDigit;
		iSecondDigit = iResult;
	
	}
	return 0;
}