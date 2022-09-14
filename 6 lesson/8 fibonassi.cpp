#include <iostream>

void fibonassi(int value) {
	int a= 1 , b=1, c=1;
	int pre = 0;
	std::cout << a << " ";
	std::cout << b << " ";
	for (int i = 2;i < value;i++) {
		c = a + b;
		a = b;
		b = c;
		std::cout << c << " ";
		
	}
	
}

int main() {
	std::cout << "Input count  fibonacci numbers";
	fibonassi(5);
	return 0;
}
