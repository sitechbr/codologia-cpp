#include "iostream"
using namespace std;

void func1(int func_number) {
    func_number = 50;
}

void func2(int *func_number) {
    *func_number = 50;
}


int main()
{
    int func_number = 10;
    cout << func_number << endl;
    func1(func_number);
    cout << func_number << endl;
    func2(&func_number);
    cout << func_number << endl;
    return 0;
}
