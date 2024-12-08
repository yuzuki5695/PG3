#include<stdio.h>
#include<chrono>
#include<string>
#include <iostream>

void measureCopyAndMove() {
    // 100��������'a'�ŏ�����
    std::string a(100000, 'a');
    std::string b; // �R�s�[��
    std::string c; // ���[�u��

    // �R�s�[�̎��Ԃ��v��
    auto startCopy = std::chrono::high_resolution_clock::now();
    b = a; // �R�s�[
    auto endCopy = std::chrono::high_resolution_clock::now();

    // ���[�u�̎��Ԃ��v��
    auto startMove = std::chrono::high_resolution_clock::now();
    c = std::move(a); // ���[�u
    auto endMove = std::chrono::high_resolution_clock::now();

    // ���ʂ��v��
    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    // ���ʂ�\�� (�P��: us)
    printf_s("�R�s�[ : %lld us\n", copyDuration);
    printf_s("�ړ� : %lld us\n", moveDuration);
    //// double�ɕϊ����ĕ\��
    //printf_s("Copy duration: %.3f us\n", static_cast<double>(copyDuration));
    //printf_s("Move duration: %.3f us\n", static_cast<double>(moveDuration));
}

int main() {
    printf_s("100,000�������ړ��ƃR�s�[�Ŕ�r���܂����B\n");
    measureCopyAndMove();
    return 0;
}
