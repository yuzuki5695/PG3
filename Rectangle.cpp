#include "Rectangle.h"
#include<stdio.h>

// 面積の計算
void Rectangle::size()
{
    area_ = width_ * height_;
}

// 矩形の情報を表示
void Rectangle::Draw()
{
    printf("矩形の面積は%.2fです\n", area_);
}