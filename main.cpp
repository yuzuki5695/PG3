#include<stdio.h>
#include<chrono>
#include<string>
#include <iostream>

void measureCopyAndMove() {
    // 100万文字の'a'で初期化
    std::string a(100000, 'a');
    std::string b; // コピー先
    std::string c; // ムーブ先

    auto startCopy = std::chrono::high_resolution_clock::now();
    b = a;
    auto endCopy = std::chrono::high_resolution_clock::now();
    auto startMove = std::chrono::high_resolution_clock::now();
    c = std::move(a);
    auto endMove = std::chrono::high_resolution_clock::now();

    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    printf_s("コピー : %lld us\n", copyDuration);
    printf_s("移動 : %lld us\n", moveDuration);
    //// doubleに変換して表示
    //printf_s("Copy duration: %.3f us\n", static_cast<double>(copyDuration));
    //printf_s("Move duration: %.3f us\n", static_cast<double>(moveDuration));
}

int main() {
    printf_s("100,000文字を移動とコピーで比較しました。\n");
    measureCopyAndMove();
    return 0;
}