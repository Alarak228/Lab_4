#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	char num;
	cout << "Вы находитесь на Бутовская линии, станция: Бритевский парк" << endl;
	cout << "Выберите куда, вам нужно" << endl;
	cout << endl;
	cout << "[A] Лесопарковая" << endl;
	cout << "[B] Улица старокачаловская" << endl;
	cout << "[C]Улица Скобелевская" << endl;
	cout << "[D] Бульвар Адмирала Ушакова" << endl;
	cout << "[E] Улица Горчакова" << endl;
	cout << "[F] Бунинская аллея" << endl;
	cout << endl;
	cout << "Куда: ";
	cin >> num;
	system("cls");
	switch (num)
	{
	case'A':
	case'a':
		cout << "До станции Лесопарковая, вам ехать: 3 минуты" << endl;
			break;
	case'B':
	case'b':
		cout << "До станции Улица Старокачаловская, вам ехать: 6 минут" << endl;
		break;
	case'C':
	case'c':
		cout << "До станции Улица Скобелевская, вам ехать: 11 минут" << endl;
		break;
	case'D':
	case'd':
	     cout << "До станции Бульвар Адмирала Ушакова, вам ехать: 12 минут" << endl;
	     break;
	case'E':
	case'e':
	     cout << "До станции улица Горчакова, вам ехать: 14 минут" << endl;
	     break;
	case'F':
	case'f':
			cout << "До станции Бунинская аллея, вам ехать: 16 минут" << endl;
	default:
		cout << "Такого нет на Бутовской линии" << endl;
		break;
	}
	return 0;
}