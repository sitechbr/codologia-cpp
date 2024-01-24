#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Input first number: " << endl;
	cin >> a;
	cout << "Input second number: " << endl;
	cin >> b;
	try {
		if (b == 0) throw 999;
		cout << "a/b=" << a / b << endl;
	}
	catch (int e) {
		if (e == 999) {
			cout << "can't divide by zero";
		}
	}
	
	return 0;
}