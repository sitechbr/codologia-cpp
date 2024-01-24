#include <string>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Input string:" << endl;
    cout << "> ";

    string s;
    getline(cin, s);
    cout << endl;

    
    int searchOffset = 0;
    int subStrPos = s.find(",", searchOffset);
    while (subStrPos != string::npos)
    {
        // Продолжаем поиск со следующего символа
        searchOffset = subStrPos + 1;
        if (s[searchOffset] != ' ') {
            s.insert(searchOffset, " ");
        }
      
        subStrPos = s.find(",", searchOffset);
        

    }

    cout << s << endl;
    return 0;
}