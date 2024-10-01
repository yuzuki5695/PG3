#include<stdio.h>
#include<Windows.h>

int main() {

	/*---文字化けを防ぐ---*/
	SetConsoleOutputCP(65001);

	char str[] = "ソ";
	printf("%s", str);

	return 0;
}