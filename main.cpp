#include<stdio.h>
#include"MyClass.h"

int main() {

	MyClass<int,int> a1(10, 20);

	printf("面積 : %d",a1.Size());

	return (0);
}