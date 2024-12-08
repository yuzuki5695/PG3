#include<stdio.h>
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int currentStep = 1;

void printMessage(const std::string& message, int step) {
    std::unique_lock<std::mutex> lock(mtx);

    // 自分の順番が来るまで待機
    cv.wait(lock, [step] { return currentStep == step; });
    // メッセージを表示
    std::cout << message << std::endl;
    // 次の順番に進める
    currentStep++;
    cv.notify_all(); // 次のスレッドに通知
}

int main() {
    // スレッド作成
    std::thread t1(printMessage, "thread1", 1);
    std::thread t2(printMessage, "thread2", 2);
    std::thread t3(printMessage, "thread3", 3);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}