#include "Circle.h"
#include<stdio.h>
#define M_PI 3.14159265358979323846

// 面積の計算
void Circle::size()
{
    area_ = radius_ * radius_ * M_PI;
}

// 円の情報を表示
void Circle::Draw()
{
    printf("円の面積は%.2fです\n", area_);
}