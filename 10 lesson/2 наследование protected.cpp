#include <iostream>

using std::cout;
using std::endl;

class Fish {
protected: 
    bool isFreshWaterFish;

public:
    void Swim() {
        if (isFreshWaterFish) {
            cout << "Пресноводный" << endl;
        }
        else {
            cout << "Морской" << endl;
        }
    }
};

class Tuna : public Fish {
public:
    Tuna() {
        isFreshWaterFish = false;
    }
};

class Carp : public Fish {
public:
    Carp() {
        isFreshWaterFish = true;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Carp myLanch;
    Tuna myDinner;
    cout << "Моя еда:" << endl;

    cout << "   Обед:";
    myLanch.Swim();
    cout << "   Ужин:";
    myDinner.Swim();
    return 0;
}

