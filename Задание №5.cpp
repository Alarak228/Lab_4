#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	cout << "Введите номер пальца большой (1 палец) - мизинец (5): " << endl;
	cin >> num;
	system("cls");
	switch (num)
	{
	case(1):
		cout << "Палец номер:"<<num<<" - это большой палец";
			break;
	case(2):
		cout << "Палец номер:" << num << " - это указательный палец";
		break;
	case(3):
		cout << "Палец номер:" << num << " - это средний палец ";
		break;
	case(4):
		cout << "Пален номер:" << num << " - это безымянный палец";
		break;
	case(5):
		cout << "Палец номер:" << num << " - это мизинчик";
		break;
	default:
		break;
	}
}

