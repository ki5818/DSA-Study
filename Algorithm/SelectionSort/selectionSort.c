/*
* ��������
* �ּҰ��� ã�� �迭�� ù��° ��ҿ� ��ȯ
* ù��° ��Ҹ� ������ ��ҵ� �� �ּҰ� ã�� ...
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))


void selection_sort(int list[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (list[j] < list[i])
				SWAP(list[i], list[j], temp);
		}
	}
}

int main() {
	int list[MAX_SIZE];
	int n;
	int cnt = 0;
	n = MAX_SIZE;
	for (int i = 0; i < n; i++) {
		list[i] = rand() % n;
	}
	selection_sort(list, n);

	for (int i = 0; i < n; i++) {
		cnt++;
		printf("%d ", list[i]);
		if (cnt % 10 == 0) printf("\r\n");
	}

	return 0;
}