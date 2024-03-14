#include <time.h>
#include <stdio.h>
#include "algorithm.h"

int power(int x, int n) {
	printf("n : %d\n", n);
	if (n == 0)
		return 1;
	else if (n % 2 == 1)
		return x * power(x * x, (n - 1) / 2);
	else
		return power(x * x, n / 2);
	
	return 0;
}
void powerMain() {
	int x, n,result;
	clock_t start, end;
	scanf_s("%d %d", &x, &n);

	start = clock();

	result = power(x, n);
	end = clock();

	double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

	printf("%d\n", result);

	printf("Program took %f seconds to execute\n", time_taken);
	return 0;
}