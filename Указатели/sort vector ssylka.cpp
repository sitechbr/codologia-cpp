#include <iostream>
#include <vector>

using namespace std;
void printMas(vector<string>& dynArray);
void sortDinamic(vector<string>& dynArray);
vector<string> genVector();


int main() {
	//vector<string> names = { "Emilia", "Boris","Katerina", "Elena", "Ekaterina" };
	vector<string> names = genVector();

	printMas(names);
	sortDinamic(names);
	printMas(names);
	return 0;
}
vector<string> genVector() {
	vector<string> names;
	cout << "Enter count names" << endl;
	int num;
	cin >>num;
	for (int i = 0;i < num; i++) {
		string s;
		cin >> s;
		names.push_back(s);
	}
	return names;
}

void printMas(vector<string>& dynArray) {
	for (int i = 0;i < dynArray.size();i++) {
		cout << dynArray[i] << endl;
	}
	cout << "-------------------------" << endl;
}

void sortDinamic(vector<string>& dynArray) {
	for (int i = 0;i < dynArray.size();i++) {
		for (int j = 0; j < dynArray.size() - 1;j++) {
			if (dynArray[j] > dynArray[j + 1]) {
				string tmp = dynArray[j];
				dynArray[j] = dynArray[j + 1];
				dynArray[j + 1] = tmp;
			}
		}

	}
}
