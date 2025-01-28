#include <stdio.h>
#include <chrono>
#include <string>
#include <iostream>

int main() {

    printf_s("100,000文字を移動とコピーで比較しました。\n");
    // 10万文字の'a'で初期化
    std::string original(100000, 'a');
    std::string copyTarget;
    std::string moveTarget;

    // コピー計測
    auto startCopy = std::chrono::high_resolution_clock::now();
    copyTarget = original;
    auto endCopy = std::chrono::high_resolution_clock::now();
    // 移動計測
    auto startMove = std::chrono::high_resolution_clock::now();
    moveTarget = std::move(original);
    auto endMove = std::chrono::high_resolution_clock::now();

    // コピーと移動の時間を計測
    auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy).count();
    auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove).count();

    printf_s("コピー　　: %.5f us\n", static_cast<double>(copyDuration));
    printf_s("移動　　　: %.5f us\n", static_cast<double>(moveDuration));

    return 0;
}
