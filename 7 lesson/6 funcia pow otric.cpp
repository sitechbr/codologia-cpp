#include <iostream>

using namespace std;

double power(int a,int n) {
	double res = 0;
	if (n >= 0)
		res = (n == 0) ? 1 : a * power(a, n - 1);
	else {
		n *= -1;
		res =  power(a, n );
		res = 1 / res;
	}
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