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

    // �����̏��Ԃ�����܂őҋ@
    cv.wait(lock, [step] { return currentStep == step; });
    // ���b�Z�[�W��\��
    std::cout << message << std::endl;
    // ���̏��Ԃɐi�߂�
    currentStep++;
    cv.notify_all(); // ���̃X���b�h�ɒʒm
}

int main() {
    // �X���b�h�쐬
    std::thread t1(printMessage, "thread1", 1);
    std::thread t2(printMessage, "thread2", 2);
    std::thread t3(printMessage, "thread3", 3);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}