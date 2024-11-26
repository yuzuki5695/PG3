#include<stdio.h>
#include <iostream>
#include <thread>

static void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    std::thread t1(printMessage, "thread1");
    t1.join();
    std::thread t2(printMessage, "thread2");
    t2.join();
    std::thread t3(printMessage, "thread3");
    t3.join();

    return 0;
}
