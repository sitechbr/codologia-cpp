#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Input string:" << endl;
    cout << "> ";
    string vowels = "AOIUEY";
    string s;
    getline(cin, s);
    cout << endl;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    int subStrPos = 0;
    int count = 0;

    for (string::iterator i = s.begin(); i != s.end(); i++) 
        for (string::iterator j = vowels.begin(); j != vowels.end(); j++)
            if (*i == *j) {
                ++count;
                break;
            }
    cout << "count:" << count << endl;
    return 0;
}