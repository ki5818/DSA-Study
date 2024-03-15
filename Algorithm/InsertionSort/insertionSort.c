/*
* ��������
* ���ĵǾ� �ִ� ����Ʈ�� ���ο� ���ڵ带 ������ ��ġ�� �����ϴ� ���� �ݺ�
*/

#include <stdio.h>
#define MAX_SIZE 100
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int list[MAX_SIZE];
int n;

void insertion_sort(int list[], int n) {
	int key, j;
	for (int i = 1; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--) {
			list[j + 1] = list[j];
		}
			list[j + 1] = key;
	}
}

int main() {
	int cnt = 0;
	n = MAX_SIZE;
	for (int i = 0; i < n; i++) {
		list[i] = rand() % n;
	}
	insertion_sort(list, n);

	for (int i = 0; i < n; i++) {
		cnt++;
		printf("%d ", list[i]);
		if (cnt % 10 == 0) printf("\r\n");
	}

	return 0;
}