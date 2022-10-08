#include <iostream>

using std::cout;
using std::endl;


class Fish {
public:
    virtual void  Swim() =0 {
        cout << "Fish swiming" << endl;
    }
};

class Carp:public Fish {
public:
    void Swim() {
        cout << "Carp swiming" << endl;
    }
};
class Tuna:public Fish {
public:
    void Swim() {
        cout << "Tuna swiming" << endl;
    }
};

void MakeFishSwim(Fish& InputFish) {
    InputFish.Swim();
}

int main() {
    Carp firstFish;
    Tuna secondFish;
    //Fish otherFish;
    firstFish.Swim();
    secondFish.Swim();
    //otherFish.Swim();
    MakeFishSwim(firstFish);
    MakeFishSwim(secondFish);
    return 0;
}
