#include <iostream>

using namespace std;

double distance(int x1=5, int y1=5, int x2=5, int y2=1) {
	double s = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return s;

}

int main() {
	int x1, x2, y1, y2 = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Введинете значение x1: ";
	cin >> x1;
	cout << "Введинете значение y1: ";
	cin >> y1;
	cout << "Введинете значение x2: ";
	cin >> x2;
	cout << "Введинете значение y2: ";
	cin >> y2;
	cout << "Длина отрезка равна:" << distance(x1, y1, x2, y2) << endl;
	cout << "Длина гипотенузы египетского треугольника равна:" <<distance() << endl;
	
	return 0;

}