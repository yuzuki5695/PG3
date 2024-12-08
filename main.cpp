#include<stdio.h>
#include<chrono>
#include<string>
#include <iostream>

void measureCopyAndMove() {
    // 100万文字の'a'で初期化
    std::string a(100000, 'a');
    std::string b; // コピー先
    std::string c; // ムーブ先

    // コピーの時間を計測
    auto startCopy = std::chrono::high_resolution_clock::now();
    b = a; // コピー
    auto endCopy = std::chrono::high_resolution_clock::now();

    // ムーブの時間を計測
    auto startMove = std::chrono::high_resolution_clock::now();
    c = std::move(a); // ムーブ
    auto endMove = std::chrono::high_resolution_clock::now();

    // 結果を計測
    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    // 結果を表示 (単位: us)
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
