#pragma once
#include<stdio.h>

// アニマルクラスの定義
class Animal
{
public: /* メンバ関数 */
	// コントラクタ
	Animal();
	// デストラクタ
	virtual ~Animal();
	// 攻撃
	virtual void Attack();

protected: /* メンバ変数 */
	// 名前
	const char* name;
};

