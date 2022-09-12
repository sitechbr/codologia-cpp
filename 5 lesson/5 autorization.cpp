#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	string user = "";
	string pwd = "";
	string save_user = "user";
	string save_pwd = "password";

	cout << "Введите user:" << endl;
	getline(cin, user);
	cout << "Введите пароль:" << endl;
	getline(cin, pwd);
	if (user == save_user)
		if (pwd == save_pwd)
			cout << "succes";
		else
			cout << "pwd not correct";
	else
		cout << "Пользователь не зарегистрирован";
		
	
	return 0;
}

