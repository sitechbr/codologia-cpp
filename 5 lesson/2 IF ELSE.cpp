#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout<< "Введите строку текста: " << endl;
	string userInput;
	getline(cin, userInput);
	
	char copyInput[20] = { '\0'};
	if (userInput.length() < 20) // Проверка границ
	{
		strcpy_s(copyInput, userInput.c_str());
		cout << "copylnput содержит: " << copyInput << endl;
	}
	else
		cout << "Превышение размера строки!" << endl;
	return 0;
}
