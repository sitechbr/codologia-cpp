#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	// Инициализированный массив из 5 целых чисел
	int myNumbers[ARRAY_LENGTH] = { 5, 10, 0, -101, 20 };

	
	cout << "Input index element in array: ";
	int elementIndex = 0;
	cin>> elementIndex;
	cout<< "Input new value: ";
	int newValue = 0;
	cin>> newValue;
	myNumbers[elementIndex] = newValue;
	
	cout << "Element " << elementIndex << " myNumbers equals: ";
	cout << myNumbers[elementIndex] << endl;

	return 0;
}
