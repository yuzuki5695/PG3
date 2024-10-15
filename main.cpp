#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

// コールバック関数
void DispResult(int* s) {
	printf("サイコロの出目は%d\n",*s);
}

typedef void (*PFunc)(int*);

// コールバック関数を呼び出す
void setTimeout(PFunc p, int number, int second) {
	Sleep(second * 1000);
	p(&number);
}


int main(void) {
	printf("サイコロを振ります\n");
	printf("1~6の奇数か偶数を入力してください。\n");

	int number = 0;
	scanf_s("%dが入力されました", &number);
	int dice = rand() % 6 + 1;
	
	int time = 3;
	printf("%d秒お待ちください\n",time);
	// コールバック関数の生成
	PFunc p;
	p = DispResult;
	setTimeout(p, dice,time);
	// 奇数・偶数の判定
	if ((number % 2) == (dice % 2)) {
		printf("正解\n");
	} else {
		printf("不正解\n");
	}	
	return (0);
}