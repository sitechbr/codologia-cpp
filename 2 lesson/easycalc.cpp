#include <iostream>
#include <string>

using namespace std;

int calc(int n1, int n2);

int main()
{
    // Объявление переменной для хранения целого числа
    int inputNumber1, inputNumber2;
    cout<< "Введите первое число: ";
    // Сохранить введенное пользователем целое число
    cin>> inputNumber1; 
    cout<< "Введите второе число: ";
    cin>> inputNumber2; 

    return calc(inputNumber1,inputNumber2);
}

int calc(int n1,int n2)
{
    cout << "Сумма равна "<< n1+ n2 << endl;
    cout << "Разность равна "<< n1 -n2 << endl;  

}