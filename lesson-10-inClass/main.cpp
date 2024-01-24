#include<iostream>
#include<string>

using namespace std;

class Doctor {
private:
    string specialization;

public:
    string name;

    int setSpecialization(string s) {
        if (s == "Surgen") {
            this->specialization = s;
            return 0;
        }
        else if (s == "Family Doctor") {
            this->specialization = s;
            return 0;
        }
        else {
            this->specialization = "Doctor";
            return 1;
        }
    }

    string getSpecialization() {
        return this->specialization;
    }

};

class Surgen: public Doctor {
public:
    int age;

    Surgen(int myAge) {
        this->age = myAge;
        cout << "Constructor create surgen, his age = " << myAge << endl;

    }
    Surgen() {
        this->age =10;
        cout << "Constructor create surgen" << endl;

    }
    ~Surgen() {
        cout << "Destructor kill surgen" << endl;
    }

};

int main()
{
    Doctor d1;
    d1.name = "Bob";
    cout << d1.name << endl;
    int foo =1;
    string specializ="";
    //while (foo ==1) {
    //    cin >> specializ;
    foo = d1.setSpecialization("Surgen");
    //}
    cout << d1.getSpecialization() << endl;
    cout << "--------------------------------------" << endl;
    Surgen d2(18);
    Surgen d3;
    d3.name = "Boris";



    return 0;
}
