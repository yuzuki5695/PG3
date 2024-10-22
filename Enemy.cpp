#include "Enemy.h"

void (Enemy::* Enemy::Table[])() = {
	&Enemy::Func1,  // 接近
	&Enemy::Func2,  // 射撃
	&Enemy::Func3   // 離脱
};

void Enemy::Update() {
	(this->*Table[index])(); {
		// 数字を入力してフェーズを変更
		int input;
		printf("フェーズを変更\n");
		scanf_s("%d", &input);

		// 入力された数字に応じてフェーズを切り替える
		if (input >= 0 && input <= 2) {
			index = input;
		}
	}

}

void Enemy::Func1() {
	printf("敵の接近\n");
}

void Enemy::Func2() {
	printf("敵の射撃\n");
}
void Enemy::Func3() {
	printf("敵の離脱\n");
}