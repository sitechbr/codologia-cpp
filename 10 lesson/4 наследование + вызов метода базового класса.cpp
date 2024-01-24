#include <iostream>

using std::cout;
using std::endl;

class Fish {
protected: 
    bool isFreshWaterFish;

public:
    Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater) {}

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
    Tuna() : Fish(false) {}
    void Swim() {
        cout << "Тунец плавает быстро" << endl;
    }
};

class Carp : public Fish {
public:
    Carp() : Fish(false) {}
    void Swim() {
        cout << "Карп плавает медленно" << endl;
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
    myDinner.Fish::Swim();
    return 0;
}

