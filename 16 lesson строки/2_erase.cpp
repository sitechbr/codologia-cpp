
#include <string>
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string sampleStr("Hello String! Wake up to a beautiful day!");
	cout << "Исходная строка: " << endl;
	cout << sampleStr << endl << endl;
	// Удалить из строки символы, заданные позицией и количеством
	cout << "Удаление второго предложения: " << endl;
	sampleStr.erase(13, 28);
	cout << sampleStr << endl << endl;

	// Найти в строке символ 'S', используя алгоритм поиска
	string::iterator iCharS = find(sampleStr.begin(),
	sampleStr.end(), 'S');

	// Если символ найден, удаляем его
	cout << "Удаление ’S' из исходной строки:" << endl;
	if (iCharS != sampleStr.end())
	sampleStr.erase(iCharS);

	cout << sampleStr << endl << endl;

// Удаление диапазона символов
	cout << "Удаление символов от begin() до end(): " << endl;
	sampleStr.erase(sampleStr.begin(), sampleStr.end());

// Проверка длины строки после операции erased
	if (sampleStr.length() == 0)
	cout << "Строка пуста" << endl;

	return 0;
}