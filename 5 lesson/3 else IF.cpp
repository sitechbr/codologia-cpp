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
	cin >> daylnput;
	if (daylnput == Sunday)
		cout << "Воскресенье названо в честь Солнца" << endl;
	else if (daylnput == Monday)
		cout << "Понедельник назван в честь Луны" << endl;
	else if (daylnput == Tuesday)
		cout << "Вторник назван в честь Марса" << endl;
	else if (daylnput == Wednesday)
		cout << "Среда названа в честь Меркурия" << endl;
	else if (daylnput == Thursday)
		cout << "Четверг назван в честь Юпитера" << endl;
	else if (daylnput == Friday)
		cout << "Пятница названа в честь Венеры" << endl;
	else if (daylnput == Saturday)
		cout << "Суббота названа в честь Сатурна" << endl;
	else
		cout << "Неверный ввод" << endl;
	return 0;

}
