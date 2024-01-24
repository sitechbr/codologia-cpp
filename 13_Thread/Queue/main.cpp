#include <thread>
#include <iostream>

void foo() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(foo);  // Create a new thread and run function foo() in it
    t.join();  // Wait for the thread to finish
    return 0;
}
