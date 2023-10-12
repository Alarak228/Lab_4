#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int num;
	cout << "[1] Понедельник" << endl;
	cout << "[2] Вторник" << endl;
	cout << "[3] Среда" << endl;
	cout << "[4] Четверг" << endl;
	cout << "[5] Пятница" << endl;
	cout << "[6] Суббота" << endl;
	cout << "[7] Воскресение" << endl;
	cout << endl;
	cout << "Введите день недели:";
	cin >> num;
	system("cls");
	switch (num)
	{
	case (1):
		cout << "Понедельник: " << endl;
		cout << endl;
		cout << "7:00 - Подъём, завтрак" << endl;
		cout << "8:00 - Отправится в коледж" << endl;
		cout << "9:00-14:20 - Учёба"<<endl;
		cout << "15:30 - Вернутся из коледжа, обед" << endl;
		cout << "18:00-20:00 - Дела, уроки" << endl;
		cout << "20:00 - Ужин, отдых"<<endl;
		cout << "23:00 - Спать" << endl;
		break;
	case(2):
		cout << "Вторник: " << endl;
		cout << endl;
		cout << "7:00 - Подъём, завтрак" << endl;
		cout << "8:00 - Отправится в коледж" << endl;
		cout << "9:00-16:20 - Учёба" << endl;
		cout << "17:15 - Вернутся из коледжа, обед" << endl;
		cout << "18:15-21:00 - Дела, уроки" << endl;
		cout << "21:00 - Ужин, отдых" << endl;
		cout << "23:00 - Спать" << endl;
		break;
	case(3):
		cout << "Среда: " << endl;
		cout << endl;
		cout << "7:00 - Подъём, завтрак" << endl;
		cout << "8:00 - Отправится в коледж" << endl;
		cout << "9:00-16:20 - Учёба" << endl;
		cout << "17:20 - Вернутся из коледжа, обед" << endl;
		cout << "18:50-21:00 - Дела, уроки" << endl;
		cout << "21:00 - Ужин, отдых" << endl;
		cout << "23:00 - Спать" << endl;
		break;
	case(4):
		cout << "Четверг: " << endl;
		cout << endl;
		cout << "7:00 - Подъём, завтрак" << endl;
		cout << "8:00 - Отправится в коледж" << endl;
		cout << "9:00-16:20 - Учёба" << endl;
		cout << "17:30 - Вернутся из коледжа, обед" << endl;
		cout << "18:00-20:00 - Дела, уроки" << endl;
		cout << "20:00 - Ужин, отдых" << endl;
		cout << "23:00 - Спать" << endl;
		break;
	case(5):
		cout << "Пятница: " << endl;
		cout << endl;
		cout << "7:00 - Подъём, завтрак" << endl;
		cout << "8:00 - Отправится в коледж" << endl;
		cout << "9:00-14:20 - Учёба" << endl;
		cout << "15:30 - Вернутся из коледжа, обед" << endl;
		cout << "18:00-20:00 - Дела, уроки" << endl;
		cout << "20:00 - Ужин, отдых" << endl;
		cout << "23:00 - Спать" << endl;
		break;
	case(6):
		cout << "Суббота: " << endl;
		cout << endl;
		cout << "10:00 - Подъём" << endl;
		cout << "11:00 - Завтрак" << endl;
		cout << "11:30-15:00 - Дела" << endl;
		cout << "15:00 - Обед" << endl;
		cout << "15:30-21:00 - Дела" << endl;
		cout << "21:30 - Ужин " << endl;
		cout << "21:30-23:00 - Дела" << endl;
		cout << "23:00 - Спать" << endl;
		break;
	case(7):
		cout << "Воскресенье: " << endl;
		cout << endl;
		cout << "10:00 - Подъём" << endl;
		cout << "11:00 - Завтрак" << endl;
		cout << "11:30-15:00 - Дела" << endl;
		cout << "15:00 - Обед" << endl;
		cout << "15:30-20:00 - Дела" << endl;
		cout << "20:00-21:00 - Уроки" << endl;
		cout << "21:30 - Ужин " << endl;
		cout << "21:30-23:00 - Дела" << endl;
		cout << "23:00 - Спать" << endl;
		break;
	default:
		cout << num << "<== Такого дня недели не бывает :(" << endl;
		break;
	}
}

