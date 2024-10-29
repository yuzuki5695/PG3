#include "Cat.h"

Cat::Cat() {
	name = "猫";
	printf("%sが現れた\n", name);
}

Cat::~Cat() {
	printf("%sが逃げた\n", name);
}

void Cat::Attack() {
	printf("%sの攻撃\n", name);
}