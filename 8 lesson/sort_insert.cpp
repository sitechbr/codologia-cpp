#include <iostream>
using namespace std;

void InsertSort(int* mas, int n) //сортировка вставками
{
    for (int i = 0; i < n - 1; i++)
    {
        int key = i + 1; // наш указатель переводим на первый элемент, так как в цикле мы идём от 0
        int temp = mas[key]; //temp - это тот элемент, который мы будем пробовать вставлять
        for (int j = i + 1; j > 0; j--)
        {
            if (temp < mas[j - 1]) // если тот элемент, который мы хотим переставить меньше элемента, расположенного слева от него, то
            {
                mas[j] = mas[j - 1]; // меняем их местами
                key = j - 1; // указатель сдвигаем, и он выйдет в отрицательный диапозон, вследствие чего цикл прервётся
            }

        }
        mas[key] = temp;
    }
    
}
//главная функция
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Количество элементов в массиве: " << "";
    cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++) //ввод массива
    {
        mas[i] = rand() % 100;
    }
    InsertSort(mas, n); //вызов функции
    cout << endl << "Результирующий массив: ";
    for (int i = 0; i < n; i++) // вывод массива
        cout << mas[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}