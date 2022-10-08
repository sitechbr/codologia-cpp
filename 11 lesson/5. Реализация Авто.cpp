#include <iostream>

using std::cout;
using std::endl;


class Auto {
protected: 
    int speed = 0;
    bool run = false;
public:
    
    virtual int GetSpeed() =0 {}
    virtual void SetSpeed(int inSpeed) = 0 {}
    virtual bool Engine() = 0 {}

};

class BMW:public Auto  {
private: 
    bool sport = false;
public:
    int GetSpeed()  {
        cout << "Speed: " << speed << endl;
        return speed;
    }
    void SetSpeed(int inSpeed) {
        cout << "Speed install: " << inSpeed << endl;
        speed = inSpeed;
    }
    bool Engine()  {
        run = !run;
        run ? cout << "Engine start" << endl : cout << "Engine stop" << endl;
        return run;
    }
    bool Sport() {
        sport = !sport;
        sport ? cout << "sport is active " << endl : cout << "Sport is passive" << endl;
        return sport;

    }
    
};
class Mersedes :public Auto {
private:
    bool massage = false;
public:
    int GetSpeed() {
        cout << "Speed: " << speed<< endl;
        return speed;
    }
    void SetSpeed(int inSpeed) {
        cout << "Speed install:" <<inSpeed << endl;
        speed = inSpeed;
    }
    bool Engine() {
        run = !run;
        run ? cout << "Engine start" << endl : cout << "Engine stop" << endl;
        return run;
    }
    bool SeatMassage() {
        massage = !massage;
        massage ? cout << "Massage active" << endl : cout << "Massage passive" << endl;
        return massage;
    }

};

class BMW7 final :public BMW {
private:
    bool lounch = false;
public:
    bool Lounch() {
        lounch = !lounch;
        lounch ? cout << "lounch active" << endl : cout << "lounch passive" << endl;
        return lounch;
    }
};




int main() {
    BMW car1;
    Mersedes car2;
    car1.SetSpeed(15);
    car2.SetSpeed(25);
    car1.GetSpeed();
    car1.Sport();
    car2.SeatMassage();
    car1.Sport();
    BMW7 car3;
    car3.Lounch();
    car3.Sport();
    car3.Engine();
    return 0;
}