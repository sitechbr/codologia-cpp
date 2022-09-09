
#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.1415926;

int Vcilindr(int r,int h) {
    int v = pi * pow(r, 2) * h;
    return v;
}


int main()
{   
    int r, h = 0;
    cout << "enter the radius of the base of the cylinder R=";
    cin >> r;
    cout << "enter the height of the ciliner H=";
    cin >> h;
    cout << Vcilindr(r, h);
    return 0;
}

