#include <string>
#include <iostream>
using namespace std;


int main()
{	
	setlocale(LC_ALL, "Russian");
	

	string sampleStr("Good day String! Today is beautiful!");
	cout << "Исходная строка:" << "\n" << sampleStr << "\n\n";

	// Поиск "day" - find() возвращает позицию
	int charPos = sampleStr.find("day", 0);
	// Проверка, что подстрока найдена...
	if (charPos != string::npos)
		cout << "\"day\" найдено в позиции " << charPos << endl;
	else
		cout << "Подстрока не найдена." << endl;

	cout << "Поиск всех подстрок \"day\"" << endl;
	int subStrPos = sampleStr.find("day", 0);

	while (subStrPos != string::npos)
	{
		cout << "Найден \"day\" в позиции " << subStrPos << endl;

		// Продолжаем поиск со следующего символа
		int searchOffset = subStrPos + 1;

		subStrPos = sampleStr.find("day", searchOffset);



	}

	return 0;
}