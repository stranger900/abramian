# include <iostream>
# include <windows.h>
# include <cmath>
# include <cmath>
#include <vector>


using namespace std;

double Power1(double a, double b);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//srand(time(NULL));
	
	double p, a, b, c;
	cout << "Внесіть число P : " << endl;
	cin >> p;
	cout << "Внесіть число A : " << endl;
	cin >> a;
	cout << "Внесіть число B : " << endl;
	cin >> b;
	cout << "Внесіть число C : " << endl;
	cin >> c;
	cout << endl;

	cout << Power1(a, p) << endl;
	cout << Power1(b, p) << endl;
	cout << Power1(c, p) << endl;
	return 0;
}

double Power1(double a, double b)
{
	if (a <= 0) {
		return 0;
	}
	else {
		return (exp(b*log(a)));
	}
}