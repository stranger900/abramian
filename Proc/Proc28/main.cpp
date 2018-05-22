# include <iostream>
# include <windows.h>
# include <cmath>
# include <ctime>
#include <vector>


using namespace std;

bool IsPrime(int n);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector <int> arr(10);
	vector <int> arrNew;
	int count = 0, k, n;
	srand(time(NULL));


	for (int i = 0; i < arr.size(); i++) {
		arr[i] = 2 + rand() % 150;
	}

	
	for(auto index : arr) {
		cout << index << " ";
		if (index > 1) {
			if (IsPrime(index)) {
				count++;
				arrNew.insert(arrNew.end(), index);
			}
		}
	}
	cout << endl;
	cout << "Кількість простих чисел в наборі = " << count << endl;
	for (auto i : arrNew) {
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
}

bool IsPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}