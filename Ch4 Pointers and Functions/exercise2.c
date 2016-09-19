/* exercise2.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void input(int [2][4], int, int);
int total(int [2][4], int, int);

int main()
{
	int i[2][4] = {0, 0, 0, 0, 0, 0, 0, 0};
	input(i, 2, 4);
	int t = total(i, 2, 4);

	printf("Total is %d\n", t);

	_getch();
	return 0;
}

void input(int x[2][4], int n, int m)
{
	int i, j;
	for (i = 0; i < n; ++i){
		printf("請輸入%d個整數: ", m);
		scanf("%d %d %d %d", *(x + i), *(x + i) + 1, *(x + i) + 2, *(x + i) + 3);
	}
}

int total(int x[2][4], int n, int m)
{
	int i, j, t = 0;
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
		    t += x[i][j];
	return t;
}