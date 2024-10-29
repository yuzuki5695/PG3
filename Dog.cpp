#include "Dog.h"

Dog::Dog() {
	name = "犬";
}

Dog::~Dog() {}

void Dog::Attack(){
	printf("%sの攻撃\n", name);
}