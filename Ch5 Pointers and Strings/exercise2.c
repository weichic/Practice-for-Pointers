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
	printf("�п�J�r��str1: ");
	scanf("%s", str1);
	printf("��J�r��str1�� %s\n", str1);
	printf("�п�J�r��str2: ");
	scanf("%s", str2);
	printf("��J�r��str2�� %s\n", str2);
	addr = mystricmp(str1, str2);

	if (addr == 0)
		printf("str1 �P str2 �۵�\n");
	else if (addr > 0)
		printf("str1 �j�� str2\n");
	else
		printf("str1 �p�� str2\n");

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