#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Input month to get the seasons" << endl;
	int month = 0;
	cin>> month;
	switch (month) {
		case 1:
		case 2:
		case 3:
			cout << "winter";
			break;
		
		case 4:
		case 5:
		case 6:
			cout << "spring";
			break;
		case 7:
		case 8:
		case 9:
			cout << "summer";
			break;
		case 10:
		case 11:
		case 12:
			cout << "autumn";
			break;

		default:
			cout << "incorect data";
	}
	
}