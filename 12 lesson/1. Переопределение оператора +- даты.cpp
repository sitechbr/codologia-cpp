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
    Date operator ++() {
        ++day;
        return *this;
    }
    Date operator ++(int) {
        Date copy(day, month, year);
        ++day;
        return copy;
    }
    Date operator +(int daysToAdd) {
        //day = day + daysToAdd;
        Date newDate(day + daysToAdd, month, year);
        //return *this;
        return newDate;
    }
    Date operator -(int daysToAdd) {
        Date newDate(day - daysToAdd, month, year);
        return newDate;
    }

};

int main() {
    Date Holiday(7, 1, 2022);
    cout << "Christmas: " << Holiday << endl;
    ++Holiday;
    cout << "The day after Christmas: " << Holiday << endl;
    Holiday++;
    cout << "The day after Christmas: " << Holiday << endl;
    cout << "Days add" << Holiday + 5 << endl;
    cout << "Days sub" << Holiday - 5 << endl;
    return 0;

}