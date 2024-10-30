#pragma once

// 形の純粋仮想関数クラス
class Ishape
{
public: /* メンバ関数 */
	virtual void size() = 0;
	virtual void Draw() = 0;
};