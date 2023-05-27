#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");

int enterNumber = 0;

cout << "Введите целое число  (от 1 до 9999): ";
cin >> enterNumber;

// проверяем входит ли введенное число в заданный диапазон
if (enterNumber <= 0 ||enterNumber > 9999) 
	cout << "Число не входит в диапазон от 1 до 9999!\n";
else // если да - приступаем к выводу на экран
{
	cout << "\nВы ввели: ";

// чтобы добраться до первой цифры в введенном числе
// (если оно четырехзначное), надо это число поделить
// на 1000 и взять от него остаток от деления на 10
// например 8 888 / 1000 = 8 (888 тысячные отбрасываются
// т.к. введенное число типа int), далее 8 % 10 = 8
// так же не ошибитесь с оператором == (равно)
	if ((enterNumber / 1000) % 10 == 1) cout << "Одна тысяча ";
	else if ((enterNumber / 1000) % 10 == 2) cout << "Две тысячи ";
	else if ((enterNumber / 1000) % 10 == 3) cout << "Три тысячи ";
	else if ((enterNumber / 1000) % 10 == 4) cout << "Четыре тысячи ";
	else if ((enterNumber / 1000) % 10 == 5) cout << "Пять тысяч ";
	else if ((enterNumber / 1000) % 10 == 6) cout << "Шесть тысяч ";
	else if ((enterNumber / 1000) % 10 == 7) cout << "Семь тысяч ";
	else if ((enterNumber / 1000) % 10 == 8) cout << "Восемь тысяч ";
	else if ((enterNumber / 1000) % 10 == 9) cout << "Девять тысяч ";


	if ((enterNumber / 100) % 10 == 1) cout << "сто ";
	else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
	else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
	else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
	else if ((enterNumber / 100) % 10 == 5) cout << "пятьсот ";
	else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
	else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
	else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
	else if ((enterNumber / 100) % 10 == 9) cout << "девятьсот ";

	if ((enterNumber / 10) % 10 == 1)
	{
		if (enterNumber % 10 == 0) cout << "десять долларов";
		else if (enterNumber % 10 == 1) cout << "одинадцать долларов";
		else if (enterNumber % 10 == 2) cout << "двенадцать долларов";
		else if (enterNumber % 10 == 3) cout << "тринадцать долларов";
		else if (enterNumber % 10 == 4) cout << "четырнадцать долларов";
		else if (enterNumber % 10 == 5) cout << "пятнадцать долларов";
		else if (enterNumber % 10 == 6) cout << "шестнадцать долларов";
		else if (enterNumber % 10 == 7) cout << "семнадцать долларов";
		else if (enterNumber % 10 == 8) cout << "восемнадцать долларов";
		else if (enterNumber % 10 == 9) cout << "девятнадцать долларов";
	}

		if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
		else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
		else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
		else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят ";
		else if ((enterNumber / 10) % 10 == 6) cout << "шестьдесят ";
		else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят ";
		else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят ";
		else if ((enterNumber / 10) % 10 == 9) cout << "девяносто ";

	if ((enterNumber / 10) % 10 != 1)
	{
		if (enterNumber % 10 == 0) cout << "долларов";
		else if (enterNumber % 10 == 1) cout << "один доллар";
		else if (enterNumber % 10 == 2) cout << "два доллара ";
		else if (enterNumber % 10 == 3) cout << "три доллара ";
		else if (enterNumber % 10 == 4) cout << "четыре доллара ";
		else if (enterNumber % 10 == 5) cout << "пять долларов ";
		else if (enterNumber % 10 == 6) cout << "шесть долларов ";
		else if (enterNumber % 10 == 7) cout << "семь долларов ";
		else if (enterNumber % 10 == 8) cout << "восемь долларов ";
		else cout << "девять долларов ";
	}
}

cout << endl << endl;
return 0;
}