#include<iostream>
#include <locale>
#include "windows.h"

using namespace std;

void main()
{
	int date, month;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть дату : " << endl;
	cin >> date;
	cout << "Внесіть місяць: " << endl;
	cin >> month;

	switch (month) {
		
	case 1: {if (date < 20){cout << "Козеріг " << endl; } else { cout << "Водолій " << endl;}break;}
	case 2: {if (date < 19) { cout << "Водолій " << endl; } else { cout << "Риби " << endl; }break; }
	case 3: {if (date < 21) { cout << "Риби" << endl; } else { cout << "Овен " << endl; }break; }
	case 4: {if (date < 20) { cout << "Овен " << endl; } else { cout << "Тілець " << endl; }break; }
	case 5: {if (date < 21) { cout << "Тілець " << endl; } else { cout << "Близнюки" << endl; }break; }
	case 6: {if (date < 22) { cout << "Близнюки " << endl; } else { cout << "Рак" << endl; }break; }
	case 7: {if (date < 23) { cout << "Рак " << endl; } else { cout << "Лев " << endl; }break; }
	case 8: {if (date < 23) { cout << "Лев " << endl; } else { cout << "Діва " << endl; }break; }
	case 9: {if (date < 23) { cout << "Діва " << endl; } else { cout << "Терези " << endl; }break; }
	case 10: {if (date < 23) { cout << "Терези " << endl; } else { cout << "Скорпіон " << endl; }break; }
	case 11: {if (date < 23) { cout << "Скорпіон" << endl; } else { cout << "Стрілець " << endl; }break; }
	case 12: {if (date < 22) { cout << "Стрілець " << endl; } else { cout << "Козеріг " << endl; }break; }

	}

}