#include <iostream>

using std::cout;
using std::endl;


class Fish {
public:
    void virtual Swim() {
        cout << "Fish swiming" << endl;
    }
};

class Carp :public Fish {
public:
    void Swim() {
        cout << "Carp swiming" << endl;
    }
};
class Tuna :public Fish {
public:
    void Swim()  override{
        cout << "Tuna swiming" << endl;
    }
};

void MakeFishSwim(Fish& InputFish) {
    InputFish.Swim();
}

int main() {
    Carp firstFish;
    Tuna secondFish;
    
    MakeFishSwim(firstFish);
    MakeFishSwim(secondFish);
    return 0;
}
