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
	printf("\n�ϥήw�s���strcmp(str1, str2)...\n");
	value = strcmp(str1, str2);
	if (value == 0)
		printf("str1 �M str2�۵�\n");
	else if (value > 0)
		printf("str1 �j�� str2\n");
	else
		printf("str1 �p�� str2\n");
	
	/* using my method */
	value = stringCompare(str1, str2);
	printf("\n�I�s�ϥΪ̦ۭq���stringCompare(str1, str2)...\n");
	if (value == 0)
		printf("str1 �M str2�۵�\n");
	else if (value > 0)
		printf("str1 �j�� str2\n");
	else
		printf("str1 �p�� str2\n");

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