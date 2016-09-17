/* addressArrayBugFixed5.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
	int x[5];
	int i;

	for (i = 0; i < 5; ++i)
	{
		printf("請輸入x[%d]的整數值: ", i);
		scanf("%d", (x + i));
	}
	for (i = 0; i < 5; ++i)
		printf("x[%d] = %d\n", i, x[i]);
	printf("\n");
	_getch();
	return 0;
}