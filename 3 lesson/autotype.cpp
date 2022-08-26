#include <iostream>
using namespace std;
int main()
{
    auto flag = true;
    auto number = 25000000000;

    cout << "flag = " << flag;
    cout << ", sizeof(flag) = " << sizeof(flag) << endl;
    cout << "number = " << number;
    cout << ", sizeof(number) = " << sizeof(number) << endl;
    
    return 0;

}
