#pragma once
#include<stdio.h>

class Ishape
{
public:

	// 自作メンバ関数
	void Update();

	void Func1();
	void Func2();
	void Func3();
	// メンバ関数ポインタのテーブル
	static void (Ishape::* Table[])();
private:
	// テーブル参照インデックス
	int index = 0;
	// メンバ関数ポインタ
	void (Ishape::* pFunc)();
};