#include <string>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Input email address:" << endl;
    cout << "> ";

    string email;
    getline(cin, email);
    cout << endl;
    

    int charPos = email.find("@", 0);
    // Проверка, что подстрока найдена...
    if (charPos != string::npos)
        cout << "Yes" <<  endl;
    else
        cout << "No" << endl;


    return 0;
}