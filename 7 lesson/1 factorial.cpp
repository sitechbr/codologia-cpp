#include <iostream>

using namespace std;

int factorial(int n) {
    int res = 1;
    for(int i = 1;i <= n;i++) {
        res *= i;

    }
    return res;
}


int main()
{
    cout << factorial(5) << endl;
    cout << factorial(10) << endl;
    cout << factorial(15) << endl;
}

