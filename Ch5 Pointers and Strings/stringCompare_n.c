/* stringCompare_n.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int stringCompare_n(char *, char *, int);

int main()
{
	char *str1 = "Honda Civic";
	char *str2 = "Honda Accord";
	int value;

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("\nㄏノ畐ㄧ计strncmp(str1, str2, 5)...\n");
	value = strncmp(str1, str2, 5);
	if (value == 0)
		printf("str1 ㎝ str2单\n");
	else if (value > 0)
		printf("str1  str2\n");
	else
		printf("str1  str2\n");
	
	/* using my method */
	value = stringCompare_n(str1, str2, 5);
	printf("\n㊣ㄏノ璹ㄧ计stringCompare_n(str1, str2, 5)...\n");
	if (value == 0)
		printf("str1 ㎝ str2单\n");
	else if (value > 0)
		printf("str1  str2\n");
	else
		printf("str1  str2\n");

	_getch();
	return 0;
}

int stringCompare_n(char *x, char *y, int n)
{
	int i;
	for (i = 1; (*x == *y) && i++ <= n; ++x, ++y)
		if (*x == '\0')
			return 0;
	return *x - *y;
}