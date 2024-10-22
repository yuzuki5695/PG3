#include<stdio.h>
#include"MyClass.h"

int main() {

	MyClass<int, int>  small(10, 20);
	MyClass<int,float>  a1(10, 20.0f);
	MyClass<int, double>  a2(10, 20.5f);
	MyClass<float, int>  b1(10.0f, 20);
	MyClass<float, double>  b2(10.0f, 20.5f);
	MyClass<double, int>  c1(10.5f, 20);
	MyClass<double, float>  c2(10.5f, 20.0);

	printf("小さいほうの値 : %d", small.MinValue());

	return (0);
}