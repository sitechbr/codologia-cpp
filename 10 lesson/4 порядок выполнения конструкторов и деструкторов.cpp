#include <iostream>

using std::cout;
using std::endl;

class Fish {
    

public:
    Fish() {
        cout << "Fish is created" << endl;
    }
    ~Fish() {
        cout << "Fish id decreat" << endl;
    }
    
};

class Tuna : public Fish {
public:
    Tuna() {
        cout << "Tuna is created" << endl;
    }
    ~Tuna() {
        cout << "Tuna is decreat" << endl;
    }
};


int main() {
    setlocale(LC_ALL, "Russian");
    Tuna myLanch;
    
    return 0;
}

