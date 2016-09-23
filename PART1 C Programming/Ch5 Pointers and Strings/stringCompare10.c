/* stringCompare10.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str1[] = "Honda Civic";
	char str2[] = "Honda Civic";
	printf("str1指向的位址: %#x\n", str1);
	printf("str2指向的位址: %#x\n", str2);

	if (str1 == str2)
		printf("str1 和 str2是相等的\n");
	else
		printf("str1 和 str2是不相等的\n");

	_getch();
	return 0;
}