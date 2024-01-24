#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	

	cout << "Введите текстовую строку: " << endl;
	string firstLine;
	getline(cin, firstLine);

	cout << "Введите другую строку: " << endl;
	string secondLine;
	getline(cin, secondLine);

	cout << "Результат конкатенации: " << endl;
	string concatString = firstLine + " " + secondLine;
	cout << concatString << endl;

	cout << "Копия полученной строки: " << endl;
	string aCopy;
	aCopy = concatString;
	cout << aCopy << endl;

	cout << "Длина строки: " << concatString.length() << endl;

	return 0;
}
