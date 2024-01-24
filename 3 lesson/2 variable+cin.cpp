#include <iostream>
using namespace std;
int main()
{
    cout << "Программа для умножения двух чисел" << endl;
    cout << "Введите первое число: ";
    int firstNumber = 0;
    cin>> firstNumber;

    cout << "Введите второе число: ";
    int secondNumber = 0;
    cin>> secondNumber;

     // Умножение двух чисел, сохранение результата в переменной
    int multiplicationResult = firstNumber*secondNumber;

     // Вывод результата
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
    
     return 0;
}