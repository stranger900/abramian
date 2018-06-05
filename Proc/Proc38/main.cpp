# include <iostream>
# include <windows.h>
# include <cmath>
# include <cmath>
#include <vector>


using namespace std;

double Power2(double a, int n);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//srand(time(NULL));
	
	double a, k, L, m;
	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число K : " << endl;
	cin >> k;
	cout << "Внесіть число L : " << endl;
	cin >> L;
	cout << "Внесіть число M : " << endl;
	cin >> m;
	cout << endl;

	cout << Power2(a, k) << endl;
	cout << Power2(a, L) << endl;
	cout << Power2(a, m) << endl;
	return 0;
}

double Power2(double a, int n)
{
	int *pn = &n;
	double rez = 1;
	if (n == 0) {
		return 1;
	}
	else if (n > 0) {
		while (*pn > 0) {
			rez *= a;
			--(*pn);
		}
		return rez;
	}
	else if (n < 0) {
		while (*pn < 0) {
			rez *= a;
			++(*pn);
		}
		return (1.0/rez);
	}

}