#pragma once
#include "Ishape.h"

// 円クラス
class Circle : public Ishape
{
public:
    // 面積
    void size() override;
    // 表示
    void Draw() override;
private:
    float radius_ = 6.0f;
    float area_;
};

