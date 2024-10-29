#pragma once
#include"Animal.h"

class Cat :  public Animal
{
public:// メンバ関数
	// コントラクタ
	Cat();
	// デストラクタ
	~Cat();
	// 攻撃
	void Attack() override;

protected: // メンバ変数
};