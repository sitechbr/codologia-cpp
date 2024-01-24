#include <iostream>
#include <stdlib.h> // нужен для вызова функций rand(), srand()
#include <time.h> // нужен для вызова функции time()
#include <vector>
using namespace std;

// Функция генерирования случайного целочисленного числа в указанных пределах.
// Диапазон чисел: [min, max]
int GetRandomNumber(int min, int max)
{
    // Установить генератор случайных чисел
    

    // Получить случайное число - формула
    int num = min + rand() % (max - min + 1);

    return num;
}

void DisplayVector(const vector<int>& inVec)
{
    for (auto element = inVec.cbegin();element != inVec.cend(); ++element)
        cout << *element << ' ';
    cout << endl;
}


int main()
{
    vector <int> integers;
    setlocale(LC_ALL, "RU");
    cout << "Input coun of the numbers: ";
    int n;
    cin >> n;
    // Использование функции GetRandomNumber()
    int number;
    for (int i = 0;i < n; i++) {
        number = GetRandomNumber(-10, 10);
        integers.push_back(number);
    }
    DisplayVector(integers);

    return 0;
}