/*
* 합병정렬
* 하나의 리스트를 두개의 리스트로 분할하여 각각 정렬 후 합침
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int sorted[MAX_SIZE];
int list[MAX_SIZE];
int n;

/*
* void merge(int list[], int left, int mid, int right)
* i는 정렬된 왼쪽리스트에 대한 인덱스
* j는 정렬된 오른쪽리스트에 대한 인덱스
* k는 정렬된 리스트에 대한 인덱스
*/
void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	// 분할된 정렬된 list의 합병
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}
	if (i > mid) // 남아있는 레코드의 일괄 복사
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	else
		for (l = i; l <= mid; l++) // 남아있는 레코드의 일괄 복사
			sorted[k++] = list[l];
	// 배열 sorted의 리스트를 배열 list로 재복사
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