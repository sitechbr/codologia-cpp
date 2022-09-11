#include <iostream>

using namespace std;

const int HOURS_OF_DAY = 24;
const int MINUTES_OF_HOUR = 60;
constexpr int MINUTES_OF_DAY = HOURS_OF_DAY * MINUTES_OF_HOUR;

struct MyTime {
    int day;
    int hours;
    int minutes;
};

MyTime decomposeTime(int m);

int main()
{
    //setlocale(LC_ALL, "Russian");
    //cout << "Введите колиичество минут"<<endl;
    cout << "Enter the count of minutes"<<endl;
    int minutes = 0;
    cin >> minutes;
    MyTime time = decomposeTime(minutes);
    cout << "day: " << time.day << endl;
    cout << "hours: " << time.hours << endl;
    cout << "minutes: " << time.minutes << endl;
    return 0;


}

MyTime decomposeTime(int m) {
    MyTime time;
    time.day = m / (MINUTES_OF_DAY);
    m = m % (MINUTES_OF_DAY);
    time.hours = m / MINUTES_OF_HOUR;
    time.minutes = m % MINUTES_OF_HOUR;
    return time;

}

