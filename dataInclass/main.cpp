#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date {
private:
    int day,mounth,year;
    string dateInString;
public:
    Date(int inDay,int inMonth, int inYear)
        : day(inDay),mounth(inMonth),year(inYear) {};
    operator const char* () {
        ostringstream formatedDate;
        formatedDate << day <<"." << mounth <<"." << year;
        dateInString = formatedDate.str();
        return dateInString.c_str();
    }
    Date operator++() {
        ++day;
        return *this;
    }

    Date operator ++(int) {
        Date copy(day,mounth,year);
        ++day;
        return copy;
    }

    Date operator +(int daysToAdd) {
        Date newDate(day + daysToAdd,mounth,year);
        return newDate;
    }

    Date convert() {
        allDay = day + 30*day + year*12*30;
        lyear = allDay % (12*30);
        Date convDate(lday,lmounth,lyear);
        return convDate;
    }

};

class Point {
public:
    int x,y;
};

int main()
{
    Date Holiday(7,1,2022);
    cout << "Crismas:" << Holiday << endl;
    //Point p1;
    //p1.x =10;
    //p1.y =10;
    //cout << p1.x << endl;
    ++Holiday;
    cout << Holiday << endl;
    Holiday++;
    cout << Holiday << endl;
    cout << Holiday + 3 << endl;
    cout << Holiday.convert() << endl;



}
