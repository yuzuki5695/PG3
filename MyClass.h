#pragma once

template <typename T1, typename T2>

class MyClass
{
public:
	// メンバ関数
	T1 A;
	T2 B;

	// コントラクタ
	MyClass(T1 a,T2 b) : A(a),B(b){}

	// 小さい値を返すメンバ関数
	auto MinValue() {
		return (A < B) ? A : B;
	}

};