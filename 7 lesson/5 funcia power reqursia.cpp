#include <iostream>

using namespace std;

double power(int a,int n) {
	int res = (n == 0) ? 1 : a*power(a, n - 1);
	return res;

}

int main() {
	int a, n = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Введинете основание: ";
	cin >> a;
	cout << "Введинете степень:  ";
	cin >> n;
	cout << a << " в степени " << n << " = " << power(a, n);
	
	
	return 0;

}