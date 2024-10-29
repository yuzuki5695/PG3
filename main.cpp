#include<stdio.h>
#include"Cat.h"
#include"Dog.h"

int main() {

	Animal* animals[3];

	// 生成
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			animals[i] = new Cat;
		} else {
			animals[i] = new Dog;
		}
	}

	// 攻撃
	for (int i = 0; i < 2; i++) {
		animals[i]->Attack();
	}
	
	// 破棄
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	return (0);
}