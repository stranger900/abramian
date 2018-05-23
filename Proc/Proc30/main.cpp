# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

int DigitN(int k, int n);
 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(5);
	int count = 0, k, n;
	srand(time(NULL));

	cout << "Внесіть число N : " << endl;
	cin >> n;

	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand();
	}

	
	for(auto index : arr) {
		cout << index << "\t ";
		cout << DigitN(index, n) << endl;
	}
	cout << endl;	
	return 0;
}

int DigitN(int k, int n)
{
	int counter = 0, lastNumber = 0;
	while (k > 0) {
		lastNumber = k % 10;
		k = k / 10;
		counter++;
		if (counter == n) {
			return lastNumber;
		}
	}
	return (-1);
}