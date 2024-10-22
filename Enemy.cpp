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
    printf("フェーズを変更してください (0:接近, 1:射撃, 2:離脱): ");
    scanf_s("%d", &input);

    // 入力された数字に応じてフェーズを切り替える
    if (input >= 0 && input <= 2) {
        index = input;
    } else {
        printf("無効な入力です。0〜2の範囲で入力してください。\n");
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