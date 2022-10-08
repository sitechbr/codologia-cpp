#include <iostream>

void changeArray(int* ptr) {
	*ptr = 5;

}

int main() {
	int array[5] = { 2,6,4,6,4 };
	std::cout << array[0];
	changeArray(array);
	std::cout << array[0];
	std::cout << array[2];



}