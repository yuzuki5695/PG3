#include "Cat.h"

Cat::Cat() {
	name = "猫";
}

Cat::~Cat() {}

void Cat::Attack() {
	printf("%sの攻撃\n", name);
}