#include<stdio.h>
#include<Windows.h>

int Recursive(int n,int a) {

	if (n == 0) {
		return (0);
	}

	return (a + Recursive(n - 1,a));
}

int Recursive2(int n, int a) {

	if (n == 0) {
		return (0);
	}

	return ((a * 2 - 50) + Recursive(n - 1, a));
}


int main() {

	int n = 1027;
	int a = 3;
	int n2 = 100;
	int a2 = 3;
	int result;
	int result2;

	result = Recursive(n,a);
	result2 = Recursive2(n2, a2);
	
	printf("時給%d円で%d時間働いたら%d円になった\n", n, a, result);

	printf("時給%d円で%d時間働いたら%d円になった\n", n2, a2, result2);

	return (0);
}