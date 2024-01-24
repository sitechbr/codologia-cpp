#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	

	cout << "Введите текстовую строку: " << endl;
	string firstLine;
	getline(cin, firstLine);
	int mediumChar = firstLine.length()/2;
	firstLine[mediumChar] = '*';
	cout << firstLine << endl;
	return 0;
}
