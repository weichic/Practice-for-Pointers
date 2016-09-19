/* functionRetPointer-bug.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int *pf(int [], int);
#define MAX 5

int main()
{
	int total = 0, k;
	int i[MAX] = {10, 20, 30, 40, 50};
	int *ptr;
	ptr = pf(i, MAX);
	printf("ptr = %p\n\n", ptr);

	printf("Sum of (\n");
	for (k = 0; k < MAX; ++k) {
		printf("k[%d] = %d \n", k, *(ptr + k));
		total += *(ptr + k);
	}
	printf(") is %d\n", total);

	_getch();
	return 0;
}

int *pf(int x[], int n)
{
	int m;
	int k[MAX];
	int j[] = {100, 200, 300, 400, 500};

	for (m = 0; m < n; ++m) {
		k[m] = j[m] + x[m];
		printf("k[%d] = %d\n", m, k[m]);
	}
	printf("k = %p\n", k);
	return k;
}