#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

class Date {
private:
    int day, month, year;
    string dateInString;
public:
    Date(int inDay, int inMonth, int inYear) 
        : day(inDay), month(inMonth), year(inYear) {};
    operator const char* () {
        ostringstream formatedDate;
        formatedDate << day << "." << month << "." << year;
        dateInString = formatedDate.str();
        return dateInString.c_str();
    }
};

int main() {
    Date Holiday(1, 7, 2022);
    cout << "Christmas: " << Holiday << endl;

    return 0;

}