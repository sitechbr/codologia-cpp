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
    
    int count=0; 
    int searchOffset = 0;
    int subStrPos = email.find("@", searchOffset);
    while (subStrPos != string::npos)
    {
        ++count;

        // Продолжаем поиск со следующего символа
        int searchOffset = subStrPos + 1;

        subStrPos = email.find("@", searchOffset);



    }

    cout << "the \"@\" symbol occurs " << count << " times" << endl;
    return 0;
}