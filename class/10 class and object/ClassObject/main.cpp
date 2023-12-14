#include <iostream>

using namespace std;

class Human {
public:
    string name;
    int age;
    string dateOfBirth;
    string gender;

    Human() {
        cout << "this is simple constructor";
    }

    Human(int humanAge) {
        this->age = humanAge;
        cout << "this is simple constructor";
    }

    Human(string humanName) {
        this->name = humanName;
        cout << " Contructor create Human, his name is " << this->name << endl;
    }

    void talk(string textToTalk) {
        cout << "My name is " << this->name << " " << textToTalk << endl;
    }

    int getAge() {
        return this->age;
    }



};


int main() {
    Human firstMan("Boris");
    firstMan.name = "Kirill";
    firstMan.age = 16;
    firstMan.gender="men";
    cout << firstMan.name << " " << firstMan.age << " " << firstMan.gender  << endl;
    firstMan.talk("How are you?");
    Human secondMan(11);

    //Human secondMan;
    //secondMan.name="Ira";
    //secondMan.age=11;
    //secondMan.dateOfBirth="01.01.1991";
    //secondMan.talk("Hello");
    //int age2 = secondMan.getAge();
    return 0;


}
