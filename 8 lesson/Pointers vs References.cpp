#include <iostream>

using namespace std;


int main() {
	int i = 10;
	cout << i << endl;
	int* pi = &i;
	int** ppi = &pi;
	int*** pppi = &ppi;

	*pi = 20;
	cout << i << endl;
	**ppi = 30;
	cout << i << endl;
	***pppi = 40;
	cout << i << endl;
	
	return 0;
}