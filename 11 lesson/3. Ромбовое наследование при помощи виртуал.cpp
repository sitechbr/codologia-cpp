#include <iostream>
using std::cout;
using std::endl;

class Animal {
public:
    Animal() {
        cout << "Конструктор Animal" << endl;
    }
    int age;
};

class Bird:public virtual Animal {
};


class Reptile:public virtual Animal{

};

class Mammal:public virtual Animal {

};

class Platypus final:public Mammal,public Reptile,public Bird {
public:
    Platypus () {
        cout << "Конструктор Platypus" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Platypus dyck;
    dyck.age = 15;
    cout << " dyck age: " << dyck.age;
    return 0;
}
