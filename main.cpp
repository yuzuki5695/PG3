#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<functional>

// コールバック関数を呼び出す
void setTimeout(std::function<void()> fx, int seconds) {
	Sleep(seconds * 1000);
	fx();
}

int main(int argc, const char* argv[]) {
	int num;
	int Dice;
	int time = 3;

	// 入力受付関数
	std::function<void()> fx = [&num]() {
		[]() {printf("サイコロを振ります\n"); }();
		[]() {printf("1~6のうち奇数か偶数を入力してください\n"); }();
		scanf_s("%d", &num);
	};
	fx();

	printf("%dが入力されました。%d秒お待ちください\n", num,time);
	
	// サイコロを振る関数
	std::function<void()> rollDice = [&Dice]() {
		Dice = std::rand() % 6 + 1;
	};
	setTimeout(rollDice, 3);
	printf("出目は%dです\n", Dice);

	// 判定
	if ((num % 2) == (Dice % 2)) {
		printf("---正解---\n");
	} else {
		printf("---不正解---\n");
	}

	return (0);
}