#include<stdio.h>
#include "Circle.h"
#include"Rectangle.h"

int main() {
	Ishape* ishape[2];

	printf("円と矩形の面積を計算\n");

	for (int i = 0; i < 2; i++) {
		if (i == 1) {
			ishape[i] = new Rectangle;
		} else {
			ishape[i] = new Circle;
		}
	}

	for (int i = 0; i < 2; i++) {
		ishape[i]->size();
	}

	printf("\n");
	for (int i = 0; i < 2; i++) {
		ishape[i]->Draw();
	}

	return (0);
}