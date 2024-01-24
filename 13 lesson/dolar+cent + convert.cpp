#include "iostream"
#include "string"


using namespace std;

class Dollar;

class Ruble {
private:
	int ruble;
	int kopek;
public:
	Ruble(int r, int k)
		:ruble(r), kopek(k) {}
	void balance() {
		string r = to_string(ruble);
		string str_r = "";
		for (int i = r.length() - 1, j = 0;i >= 0 && j < r.length();i--, j++) {
			if (j % 3 == 0) str_r += " ";
			str_r += r[i];
		}
		reverse(str_r.begin(), str_r.end());
		cout << "На вашем счете " << str_r << "р." << kopek << "к." << endl;

	}
	void addMoney(int r, int k) {
		kopek += k;
		ruble += kopek / 100;
		ruble += r;
		kopek = kopek % 100;
	}

	Dollar convert();
};

class Dollar {
private:
	int dollar;
	int cent;
public:
	Dollar(int d, int c)
		:dollar(d), cent(c) {}
	void balance() {
		string d = to_string(dollar);
		string str_d = "";
		for (int i = d.length() - 1, j = 0;i >= 0 && j < d.length();i--, j++) {
			if (j % 3 == 0) str_d += " ";
			str_d += d[i];
		}
		reverse(str_d.begin(), str_d.end());
		cout << "На вашем счете " << str_d << "$" << cent << "c." << endl;

	}
	void addMoney(int d, int c) {
		cent += c;
		dollar += cent / 100;
		dollar += d;
		cent = cent % 100;
	}
	Ruble convert();
};



int main() {
	setlocale(LC_ALL, "Russian");
	Ruble myWage(60, 30);
	myWage.balance();
	myWage.addMoney(60, 70);
	myWage.balance();
	Dollar vklad = myWage.convert();
	vklad.balance();
	Ruble vklad2 = vklad.convert();
	vklad2.balance();

	return 0;

}

Dollar Ruble::convert()
{
	return Dollar(ruble / 60, kopek / 60);
};

Ruble Dollar::convert()
{
	return Ruble(dollar * 60, cent * 60); 
};