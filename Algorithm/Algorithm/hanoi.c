#include <time.h>
#include <stdio.h>
#include "algorithm.h"

int cnt = 0;

void hanoi(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
		cnt++;
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c으로 옮긴다. \n", n, from, to);
		cnt++;
		hanoi(n - 1, tmp, from, to);
	}
}

void hanoiMain() {
	hanoi(10, 'A', 'B', 'C');
	printf("원판을 이동한 횟수 : %d \n", cnt);
}
