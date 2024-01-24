#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int h= 0;
	cout << "Узнайте какое время дня!" << endl;
	cout << "Enter hours: " << endl;
	cin >> h;

	if (h >= 0 and h < 6) 
		cout << "Cейчас утро";
	else if (h >= 6 and h < 12) 
		cout << "Cейчас день";
	else if (h >= 12 and h < 18) 
		cout << "Cейчас вечер";
	else if (h >= 18 and h < 24) 
		cout << "Cейчас ночь";
	return 0;
}

