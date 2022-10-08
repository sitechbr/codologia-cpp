#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b)
    {
        return a;
    }
    else return b;
}
    
int max(int a, int b, int c) {
    return max(max(a, b), c);
}
    
int main()
{
    cout << "max number:"<<max(2,5) << endl;
    cout << "max number:" << max(5, 5) << endl;
    cout << "max number:" << max(5, 2,1) << endl;
    cout << "max number:" << max(1, 5,1) << endl;
    cout << "max number:" << max(1, 5, 8) << endl;

    
}

