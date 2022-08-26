#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Объявление переменной для хранения целого числа
    int inputNumber1;
    cout<< "Введите целое число: ";
    // Сохранить введенное пользователем целое число
    cin>> inputNumber1; 
    // Аналогично текстовым данным
    cout<< "Введите ваше имя: ";
    string inputName;
    cin >> inputName;
    cout << inputName<< " ввел "<< inputNumber1 << endl;
    return 0;
}