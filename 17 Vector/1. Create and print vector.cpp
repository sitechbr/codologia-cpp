#include <vector>
#include <iostream>

int main()
{
    // Вектор целых чисел
    std::vector<int> integers;
    // Использование списка инициализации(C++11)
    std::vector<int> initVector{ 202, 2017, -1 };
    std::cout << "________________________________________" << std::endl;
    for (int i = 0; i < 3;i++) {
        std::cout << initVector[i] << std::endl;
    }

    // Вектор c 10 элементами (может расти во время выполнения)
    std::vector<int> tenElements(10);

    std::cout << "________________________________________" << std::endl;
    for (int i = 0; i < tenElements.size();i++) {
        std::cout << tenElements[i] << std::endl;
    }

    // Вектор с 10 элементами, каждый равен 90
    std::vector<int> tenElemlnit(10, 90);
    std::cout << "________________________________________" << std::endl;

    for (int i: tenElemlnit) {
        std::cout << i << std::endl;
    }

    // Инициализация вектора содержимым другого вектора
    std::vector<int> copyVector(tenElemlnit);
    std::cout << "________________________________________" << std::endl;
    for (int i = 0; i < copyVector.size();i++) {
        std::cout << copyVector.at(i) << std::endl;
    }


    // Вектор инициализирован 5 элементами другого вектора
    std::vector<int> partialCopy(tenElements.cbegin(),
        tenElements.cbegin() + 5);



    return 0;
}