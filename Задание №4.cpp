#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	int num1;
	int result;
	cout << "Введите 1-ое число" << endl;
	cin >> num;
	cout << "Введите 2-ое число" << endl;
	cin >> num1;
	cout << "Введите ответ" << endl;
	cin >> result;
		if (result==num*num1)                                           //	Ответ верный
		{
			cout << "Поздравляю вы решили пример правильно!" << endl;
			cout << "Ответ: " << num * num1;
		}
		else                                                             // Ответ не верный
		{
			cout << "Ответ не верный!" << endl;
			cout << "Правильный ответ:" << num * num1;
		}
}
