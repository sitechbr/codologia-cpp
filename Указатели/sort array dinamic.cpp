#include <iostream>
#include <string>

void printArray(std::string* names, int length);
void sort_string(std::string* names, int length);

void sort_string(std::string* names, int length) {
	for (int i = 1;i < length; i++) {
		for (int j = 0;j < length-1; j++) {
			if (names[j] > names[j + 1]) {
				std::string tmp = names[j];
				names[j] = names[j + 1];
				names[j + 1] = tmp;
			}
		}
	}
	printArray(names, length);
}

void printArray(std::string* names, int length) {
	for (int i = 0;i < length;i++) {
		std::cout << names[i] << std::endl;
	}
}

int main() {
	std::cout << "How many names would you like to enter: ";
	int count;
	std::cin >> count;
	std::string* names  = new std::string[count];
	std::cin.get();
	for (int i = 0;i < count;i++) {
		std::cout << i << ":";
		std::cin >> names[i];
	}
	//std::cout << sizeof(*names);

	sort_string(names,count);


	
}