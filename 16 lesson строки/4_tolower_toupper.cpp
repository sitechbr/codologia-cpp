#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите строку для преобразования:" << endl;
    cout << "> ";

    string inStr;
    getline(cin, inStr);
    cout << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::toupper);
    cout << "Преобразованная в верхний регистр строка:" << endl;
    cout << inStr << endl << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::tolower);
    cout << "Преобразованная в нижний регистр строка:" << endl;
    cout << inStr << endl << endl;

    return 0;
}