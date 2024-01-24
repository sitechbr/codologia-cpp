#include <thread>
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;
void peopleQueue(vector<string>  q) {
    for(int i=0;i<q.size();i++) {
        cout << q[i] << endl;
        sleep(5);
    }
}

void peopleQueueQuick(vector<string>  q) {
    for(int i=0;i<q.size();i++) {
        cout << q[i] << endl;
        sleep(1);
    }
}

int main() {
    vector<string> queue1= {"Boris","Darya","Sasha","Kolya"};
    vector<string> queue2 ={"Pasha","Timur","Gena","Fedor"};
    vector<string> vipqueue = {"Roman Michailovich","Timur Rogriges", "Tina Makartni"};
    //peopleQueue(vipqueue);
    std::thread t1(peopleQueue,queue1);
    std::thread t2(peopleQueue,queue2);
    std::thread t3(peopleQueueQuick,vipqueue);
    t1.join();  // Wait for the thread to finish
    t2.join();
    t3.join();
    return 0;
}
