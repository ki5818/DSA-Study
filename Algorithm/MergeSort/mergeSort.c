/*
* �պ�����
* �ϳ��� ����Ʈ�� �ΰ��� ����Ʈ�� �����Ͽ� ���� ���� �� ��ħ
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int sorted[MAX_SIZE];
int list[MAX_SIZE];
int n;

/*
* void merge(int list[], int left, int mid, int right)
* i�� ���ĵ� ���ʸ���Ʈ�� ���� �ε���
* j�� ���ĵ� �����ʸ���Ʈ�� ���� �ε���
* k�� ���ĵ� ����Ʈ�� ���� �ε���
*/
void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	// ���ҵ� ���ĵ� list�� �պ�
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}
	if (i > mid) // �����ִ� ���ڵ��� �ϰ� ����
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	else
		for (l = i; l <= mid; l++) // �����ִ� ���ڵ��� �ϰ� ����
			sorted[k++] = list[l];
	// �迭 sorted�� ����Ʈ�� �迭 list�� �纹��
	for (l = left; l <= right; l++)
		list[l] = sorted[l];
}

void merge_sort(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

int main() {
	int cnt = 0;
	n = 8;
	for (int i = 0; i < n; i++) {
		list[i] = rand() % n;
	}
	merge_sort(list, 0, n-1);

	for (int i = 0; i < n; i++) {
		cnt++;
		printf("%d ", list[i]);
		if (cnt % 10 == 0) printf("\r\n");
	}

	return 0;
}