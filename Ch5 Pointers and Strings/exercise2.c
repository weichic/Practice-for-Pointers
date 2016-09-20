/* exercise2.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int mystricmp(char *, char *);

int main()
{
	char str1[80];
	char str2[80];
	int addr;
	printf("請輸入字串str1: ");
	scanf("%s", str1);
	printf("輸入字串str1為 %s\n", str1);
	printf("請輸入字串str2: ");
	scanf("%s", str2);
	printf("輸入字串str2為 %s\n", str2);
	addr = mystricmp(str1, str2);

	if (addr == 0)
		printf("str1 與 str2 相等\n");
	else if (addr > 0)
		printf("str1 大於 str2\n");
	else
		printf("str1 小於 str2\n");

	_getch();
	return 0;
}

int mystricmp(char *x, char *y)
{
	int addr = 0;
	while ((*(x + addr) != '\0') && ((*(x + addr) == *(y + addr)) || (*(x + addr) + 32 == *(y + addr)) || (*(x + addr) == *(y + addr) + 32)))
		++addr;

	return *(x + addr) - *(y + addr);
}