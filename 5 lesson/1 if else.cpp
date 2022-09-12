#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Введите два целых числа: " << endl;
	int numl = 0, num2 = 0;
	cin >> numl;
	cin >> num2;
	cout << "Введите 'm'  для умножения, любое иное для сложения: ";
	char userSelection = '\0';
	cin >> userSelection;
	
	int result = 0;
	if (userSelection == 'm')
		result = numl * num2;
	else
		result = numl + num2;
	
	cout << "Результат: " << result << endl;
	return 0;
}