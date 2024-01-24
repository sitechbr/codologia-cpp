#include <iostream>
using namespace std;

class Human {
public:
    string name;
    int age;
    string dateOfBirth;
    string gender;

    void Talk(string textToTalk) {
        cout << "Boris speak " << textToTalk << endl;
    }
};

int main()
{
    Human firstMan;
    firstMan.name = "Ivan";
    firstMan.age = 16;
    firstMan.dateOfBirth = "01.01.1967";
    firstMan.gender = "men";
    firstMan.Talk("How are you?");
    return 0;
}


