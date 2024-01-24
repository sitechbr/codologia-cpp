#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	cout << "Узнайте, в честь чего назван день недели!" << endl;
	cout << "Введите номер дня недели (воскресенье = 0): ";
	int daylnput = Sunday; // Инициализация воскресеньем
	cin>> daylnput;
	switch (daylnput)
	{
	case Sunday:
		cout << "Воскресенье названо в честь Солнца" << endl;
		break;
	case Monday:
		cout << "Понедельник назван в честь Луны" << endl;
		break;
	case Tuesday:
		cout << "Вторник назван в честь Марса" << endl;
		break;
	case Wednesday:
		cout << "Среда названа в честь Меркурия" << endl;
		break;
	case Thursday:
		cout << "Четверг назван в честь Юпитера" << endl;
		break;
	case Friday:
		cout << "Пятница названа в честь Венеры" << endl;
		break;
	case Saturday:
		cout << "Суббота названа в честь Сатурна" << endl;
		break;
	default:
		cout << "Неверный ввод" << endl;
		break;
	}
	return 0;
}

