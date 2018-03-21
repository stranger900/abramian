#include<iostream>
#include <locale>
#include "windows.h"
#include <iomanip>

using namespace std;

void main()
{
	int d, n, n1, o, s;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Внесіть тризначний номер 100 - 999 : " << endl;
	cin >> n1;

	s = n1 / 100;

	switch (s) {
	case 0: { break; }
	case 1: {cout << "Сто "; break; }
	case 2: {cout << "Двісті ";	break; }
	case 3: {cout << "Триста ";	break; }
	case 4: {cout << "Чотириста "; break; }
	case 5: {cout << "П'ятсот "; break; }
	case 6: {cout << "Шістсот "; break;	}
	case 7: {cout << "Сімсот " ;	break; }
	case 8: {cout << "Вісімсот " ; break; }
	case 9: {cout << "Дев'ятсот ";	break; }
	default: {cout << "Виникла помилка СОТНІ" ; }
	}

	n = n1 % 100;
	d = n / 10;
	o = n % 10;

	if ((n > 9 && n < 20)) {
		switch (n) {
		case 10: {cout << "десять "<<endl; } break;
		case 11: {cout << "одинадцять "<<endl; } break;
		case 12: {cout << "дванадцять "<<endl; } break;
		case 13: {cout << "тринадцять "<<endl; } break;
		case 14: {cout << "чотирнадцять "<<endl; } break;
		case 15: {cout << "п'ятнадцять "<<endl; } break;
		case 16: {cout << "шістнадцять "<<endl; } break;
		case 17: {cout << "сімнадцять "<<endl; } break;
		case 18: {cout << "вісімнадцять "<<endl; } break;
		case 19: {cout << "девятнадцять "<<endl; } break;
		}
	}
	else if (n>=20 && n<100){
		switch (d) {
		case 2: {cout << "двадцять ";break;}
		case 3: {cout << "тридцять ";break;}
		case 4: {cout << "сорок ";	break;}
		case 5: {cout << "п'ятдесят ";break;}
		case 6: {cout << "шістдесят ";break;}
		case 7: {cout << "сімдесят "; break; }
		case 8: {cout << "вісімдесят "; break; }
		case 9: {cout << "дев'яносто "; break; }
		default: {cout << "Виникла помилка десятки" << endl;}
		}

		switch (o) {
		case 0: {cout << "" << endl; break; }
		case 1: {cout << "один " << endl; break;}
		case 2: {cout << "два " << endl;	break;}
		case 3: {cout << "три " << endl;	break;}
		case 4: {cout << "чотири " << endl; break;}
		case 5: {cout << "п'ять " << endl; break;}
		case 6: {cout << "шість " << endl; break;	}
		case 7: {cout << "сім " << endl;	break; }
		case 8: {cout << "вісім " << endl; break;}
		case 9: {cout << "дев'ять " << endl;	break;}
		default: {cout << "Виникла помилка одиниці" << endl;}
		}
	}
	else if (n < 10) {
		switch (n) {
		case 0: { break; }
		case 1: {cout << "один " << endl; break; }
		case 2: {cout << "два " << endl;	break; }
		case 3: {cout << "три " << endl;	break; }
		case 4: {cout << "чотири " << endl; break; }
		case 5: {cout << "п'ять " << endl; break; }
		case 6: {cout << "шість " << endl; break;	}
		case 7: {cout << "сім " << endl;	break; }
		case 8: {cout << "вісім " << endl; break; }
		case 9: {cout << "дев'ять " << endl;	break; }
		default: {cout << "помилка одиниці" << endl; }
		}
	}
	
}