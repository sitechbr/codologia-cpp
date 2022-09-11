#include <iostream>

using namespace std;

const int HOURS_OF_DAY = 24;
const int MINUTES_OF_HOUR = 60;
constexpr int MINUTES_OF_DAY = HOURS_OF_DAY * MINUTES_OF_HOUR;



int main()
{
    //setlocale(LC_ALL, "Russian");
    //cout << "Введите колиичество минут"<<endl;
    cout << "Enter the count of minutes"<<endl;
    int minutes = 0;
    cin >> minutes;
    int r_day = minutes / (MINUTES_OF_DAY);
    cout<< r_day;
    minutes = minutes% (MINUTES_OF_DAY);
    int r_hours = minutes / MINUTES_OF_HOUR;
    int r_minutes = minutes % MINUTES_OF_HOUR;
    cout << "day: " << r_day << endl;
    cout << "hours: " << r_hours << endl;
    cout << "minutes: " << r_minutes << endl;


}

