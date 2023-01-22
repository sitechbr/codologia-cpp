#include <vector>
 #include <iostream>
 using namespace std;

 void DisplayVector(const vector<int>& inVec)
 {
    for(auto element = inVec.cbegin();celement != inVec.cend(); ++element )
        cout << *element << ' ';
    cout << endl;
 }

 int main ()
 {
 // Создать экземпляр вектора с 4 элементами со значением 90
    vector <int> integers(4, 90);

    cout « "Начальное содержимое вектора: ";
    DisplayVector(integers);

 // Вставить 25 в начало
    integers.insert(integers.begin(), 25);

 // Вставить в конец 2 числа со значением 45
    integers.insert(integers.end(), 2, 45);

 cout « "Содержимое вектора после вставок: ";
 DisplayVector(integers);

 // Другой вектор, содержащий два элемента со значением 30
 vector <int> another(2, 30);

// Вставить два элемента из другого контейнера в позицию [1]
 integers.insert(integers.begin() + 1,
 another.begin(), another.end());

 cout « "Вектор после вставкиэлементов из ";
 cout « "другого вектора всредину: " « endl;
 DisplayVector(integers);

 return 0