#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) 
        return 1;
    
    else
        return n * factorial(n - 1);
}

int factorial2(int n) {
   int res = (n == 1) ?  1 :  n * factorial(n - 1);
   return res;
}


int main()
{
    cout << factorial(5) << endl;
    cout << factorial2(5) << endl;
    cout << factorial(10) << endl;
    cout << factorial(15) << endl;
}

