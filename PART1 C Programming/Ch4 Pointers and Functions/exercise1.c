/* exercise1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void input(int [], int);
int total(int [], int);

int main()
{
	int i[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	input(i, 10);
	int t = total(i, 10);

	printf("Total is %d\n", t);

	_getch();
	return 0;
}

void input(int x[], int n)
{
	int j;
	printf("請輸入十個整數: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", x, x+1, x+2, x+3, x+4, x+5, x+6, x+7, x+8, x+9);
}

int total(int x[], int n)
{
	int i, t = 0;
	for (i = 0; i < n; ++i)
		t += x[i];
	return t;
}