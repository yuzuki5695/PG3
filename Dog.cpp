#include "Dog.h"

Dog::Dog() {
	name = "犬";
	printf("%sが現れた\n", name);
}

Dog::~Dog() {
	printf("%sが逃げた\n", name);
}

void Dog::Attack(){
	printf("%sの攻撃\n", name);
}