#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int year = 0;
	int maxyear = 0;
	int minyear = 100;
	int num = 0; //сумма
	int num2 = 0; //сред число
	int people = 0; // кол-во поситителей
	cout << "Введите кол-во поситителей спортзала: ";
	cin >> people;
	system("cls");
	for (int i = 0; i < people; i++) {
		cout << "Введите возраст " <<  i + 1  <<" поситителя ";
		cin >> year;
		if (year > maxyear)
			maxyear = year;
		if (year < minyear)
			minyear = year;
		num += year;
	}
	num2 = num / people;
	system("cls");
	cout << "Средний возраст всех поситителей: " << num2 << endl;
	cout << "Самый взрослый: " << maxyear << endl;
	cout << "Самый молодой: " << minyear << endl;

	return 0;
}
