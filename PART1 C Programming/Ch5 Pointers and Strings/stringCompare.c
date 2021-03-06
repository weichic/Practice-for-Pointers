/* stringCompare.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int stringCompare(char *, char *);

int main()
{
	char *str1 = "Honda Civic";
	char *str2 = "Honda Accord";
	int value;

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("\n使用庫存函數strcmp(str1, str2)...\n");
	value = strcmp(str1, str2);
	if (value == 0)
		printf("str1 和 str2相等\n");
	else if (value > 0)
		printf("str1 大於 str2\n");
	else
		printf("str1 小於 str2\n");
	
	/* using my method */
	value = stringCompare(str1, str2);
	printf("\n呼叫使用者自訂函數stringCompare(str1, str2)...\n");
	if (value == 0)
		printf("str1 和 str2相等\n");
	else if (value > 0)
		printf("str1 大於 str2\n");
	else
		printf("str1 小於 str2\n");

	_getch();
	return 0;
}

int stringCompare(char *x, char *y)
{
	for (; *x == *y; ++x, ++y)
		if (*x == '\0')
			return 0;
	return *x - *y;
}