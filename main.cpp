#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

typedef void (*PFunc)(int*);

void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n",*s);
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}


int main(void) {

	int number = rand() % 2 + 0;

	printf("%d\n", number);

	PFunc p;
	p = DispResult;
	setTimeout(p, 2);



	return (0);
}