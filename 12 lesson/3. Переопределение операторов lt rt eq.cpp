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
    Date operator --() {
        --day;
        return *this;
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
    bool operator ==(const Date& compareTo) {
        bool flag = false;
        if ((day == compareTo.day) && (month==compareTo.month) &&(year==compareTo.year)) 
            flag =true;
        return flag;
    }
    bool operator <(const Date& compareTo) {
        bool flag = false;
        if ((day < compareTo.day) || (month < compareTo.month) || (year < compareTo.year))
            flag = true;
        return flag;
    }
    bool operator >(const Date& compareTo) {
        bool flag = false;
        if ((day > compareTo.day) || (month > compareTo.month) || (year > compareTo.year))
            flag = true;
        return flag;
    }

};

int main() {
    Date Holiday1(2, 1, 2022);
    Date Holiday2(7, 1, 2022);
    cout << "Christmas: " << Holiday1 << endl;
    Holiday2 = Holiday2 + 2;
    cout << "Day 2: " << Holiday2 << endl;
    Holiday1 < Holiday2 ? cout << "One holiday quicly" << endl : cout << "One holiday lastly" << endl;

    return 0;

}