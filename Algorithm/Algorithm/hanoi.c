#include <time.h>
#include <stdio.h>
#include "algorithm.h"

int cnt = 0;

void hanoi(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("���� 1�� %c���� %c�� �ű��.\n", from, to);
		cnt++;
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c���� �ű��. \n", n, from, to);
		cnt++;
		hanoi(n - 1, tmp, from, to);
	}
}

void hanoiMain() {
	hanoi(10, 'A', 'B', 'C');
	printf("������ �̵��� Ƚ�� : %d \n", cnt);
}
