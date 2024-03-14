#define MAX 100

#include <stdio.h>
#include "algorithm.h"

void sub(int var, int* list) {
	var = 10;
	list[0] = 10;

}

void arrayMain() {
	int var;
	int list[MAX];
	var = 0;
	list[0] = 0;
	sub(var, list);
	printf("var : %d list[0] : %d", var, list[0]);
	return 0;
}