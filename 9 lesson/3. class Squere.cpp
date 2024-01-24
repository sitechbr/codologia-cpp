#include <iostream>
using namespace std;

class Circle {

private:
    const double PI = 3.14;
    double radius;

public:
    Circle(double circleRadius)
        :radius(circleRadius)
    {

    }
    double Squere() {
        return PI * radius * radius;
    }

};

int main() {
    Circle mycircle(5);
    cout << mycircle.Squere() << endl;

    return 0;
}