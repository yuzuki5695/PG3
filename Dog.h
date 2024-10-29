#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:// メンバ関数
	// コントラクタ
	Dog();
	// デストラクタ
	~Dog();
	// 攻撃
	void Attack() override;

protected: // メンバ変数
};