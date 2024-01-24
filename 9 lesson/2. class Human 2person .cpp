#include <iostream>
#include < string>
using namespace std;

class Human
{
private:
    int age;

public:

    string name;
    int GetAge() {

        return (age < 30) ? age : age - 2;
    }
    void SetAge(int humanAge) {
        if (humanAge > 0) {
            age = humanAge;
        }

    }

    void IntroduceSelf()
    {
        cout << "Я " + name << " и мне ";
        cout << GetAge() << " лет" << endl;
    }
};

int main()
{
    // Объект Human с именем "Adam"
    setlocale(LC_ALL, "Russian");
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.SetAge(32);

    // Объект Human с именем "Eve"
    Human firstWoman;
    firstWoman.name = "Eve";
    firstWoman.SetAge(28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
}