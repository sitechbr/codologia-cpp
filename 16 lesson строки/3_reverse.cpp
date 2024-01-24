#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	
	string sampleStr("Hello String! We will reverse you!");
	cout << "Исходная строка: " << endl;
	cout << sampleStr << endl << endl;

	reverse(sampleStr.begin(), sampleStr.end());

	cout << "После применения алгоритма std::reverse: " << endl;
	cout << sampleStr << endl;

	return 0;
}