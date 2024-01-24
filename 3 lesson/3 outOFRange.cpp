#include <iostream>
using namespace std;
int main()
{
    unsigned short uShortValue = 65535;
    cout << "Увеличение unsigned short " << uShortValue << ": ";
    cout << ++uShortValue << endl;
    
    short signedShort = 32767;
    cout << "Увеличение signed short " << signedShort << ": ";
    cout << ++signedShort << endl;

     return 0;
 }
