/* string5.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char *str1 = "Apple iPod";
	char str2[] = "Apple iPod";
	printf("�r��str1��: %s\n", str1);
	printf("�r��str2��: %s\n", str2);

	_getch();
	return 0;
}