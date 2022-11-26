#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostringstream;

class Date {
private:
    int day, month, year;
    string dateInString;
public:
    Date(int inDay, int inMonth, int inYear) try
    {   
        if (inDay < 1 or inDay>31) throw 1;
        if (inMonth < 1 or inMonth>12) throw 2;
        if (inYear < 1 or inYear>2100) throw 3;
        day = inDay;
        month = inMonth;
        year = inYear;
       

    }
    


    catch (int error) {
        if (error == 1) cout << "Incorect day" << endl;
        if (error == 2) cout << "Incorect mounth" << endl;
        if (error == 3) cout << "Incorect year" << endl;

    }
    ~Date() {
        cout << "destructor" << endl;
    }
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
   /* Date Holiday(7, 1, 2022);
    cout << "Christmas: " << Holiday << endl;
    ++Holiday;
    cout << "The day after Christmas: " << Holiday << endl;
    Holiday++;
    cout << "The day after Christmas: " << Holiday << endl;
    cout << "Days add" << Holiday + 5 << endl;
    cout << "Days sub" << Holiday - 5 << endl;*/
    int d, m, y = 0;
   
    cout << "Input day: ";
    cin >> d;
    cout << "Input mounth: ";
    cin >> m;
    cout << "Input year: ";
    cin >> y;
    try {
        Date d1(d, m, y);
    }
    catch(...) {
        cout << "object not created" << endl;
    }
        
        
   
    return 0;

}