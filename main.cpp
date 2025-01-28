#include <stdio.h>
#include <chrono>
#include <string>
#include <iostream>

int main() {

    printf_s("100,000�������ړ��ƃR�s�[�Ŕ�r���܂����B\n");
    // 10��������'a'�ŏ�����
    std::string original(100000, 'a');
    std::string copyTarget;
    std::string moveTarget;

    // �R�s�[�v��
    auto startCopy = std::chrono::high_resolution_clock::now();
    copyTarget = original;
    auto endCopy = std::chrono::high_resolution_clock::now();
    // �ړ��v��
    auto startMove = std::chrono::high_resolution_clock::now();
    moveTarget = std::move(original);
    auto endMove = std::chrono::high_resolution_clock::now();

    // �R�s�[�ƈړ��̎��Ԃ��v��
    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    printf_s("�R�s�[�@�@: %.5f us\n", static_cast<double>(copyDuration));
    printf_s("�ړ��@�@�@: %.5f us\n", static_cast<double>(moveDuration));

    return 0;
}
