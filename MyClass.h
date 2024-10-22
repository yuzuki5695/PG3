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

	T1 Size() {
		return static_cast<T1>(A * B);
	}

};

