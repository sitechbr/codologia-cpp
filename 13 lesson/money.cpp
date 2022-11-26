#include "iostream"
#include "string"


using namespace std;

class Ruble {
private:
	int ruble;
	int kopek;
public:
	Ruble(int r, int k)
		:ruble(r), kopek(k) {}
	void balance() {
		string r = to_string(ruble);
		string str_r="";
		for (int i = r.length()-1,j=0;i >= 0&&j<r.length();i--, j++) {
			if (j% 3 == 0) str_r += " ";
			str_r += r[i];	
		}
		reverse(str_r.begin(), str_r.end());
		cout <<  "На вашем счете " << str_r<< "р." << kopek << "к." << endl;

	}
	void addMoney(int r, int k) {
		kopek += k;
		ruble += kopek/100;
		ruble += r;
		kopek = kopek % 100;
	}
};


int main() {
	setlocale(LC_ALL, "Russian");
	Ruble myWage(5000, 30);
	myWage.balance();
	myWage.addMoney(50000000, 70);
	myWage.balance();
	return 0;

}