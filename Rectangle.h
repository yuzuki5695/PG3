#pragma once
#include "Ishape.h"

// 矩形クラス
class Rectangle : public Ishape
{
public:
    // 面積
    void size() override;
    // 表示
    void Draw() override;
private:
    float width_ = 5.0f;
    float height_ = 5.0f;
    float area_;
};



