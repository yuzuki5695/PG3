#include<stdio.h>
#include<Windows.h>

int Recursive(int n,int a) {

	if (n == 0) {
		return (0);
	}

	return (a + Recursive(n - 1,a));
}

int main() {

	int n = 100;
	int a = 10;
	int result;

	result = Recursive(n,a);
	printf("時給%dで%d時間働いたら%dになった\n", n, a, result);

	return (0);
}