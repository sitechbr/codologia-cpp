#include <iostream>

using namespace std;



int main() {
	string text = "hello";
	for (auto& s : text) {
		int asci_s = s;
		cout << s << " asci: "<< asci_s<<endl;

	}

	text = "HELLO";
	for (auto& s : text) {
		int asci_s = s;
		cout << s << " asci: " << asci_s << endl;

	}

	text = "program";
	int asci_s = text[0]-32;
	text[0] = asci_s;
	cout << text << endl;

	
	
	return 0;

}