/* stringCompare30.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char *str1 = (char *)malloc(20);
	str1 = "Honda Civic";
	char *str2 = (char *)malloc(20);
	str2 = "Honda Civic";
	char *str3 = (char *)malloc(20);
	str3 = "Honda Accord";

	printf("str1���V����}: %#x\n", str1);
	printf("str2���V����}: %#x\n", str2);
	printf("str3���V����}: %#x\n", str3);

	if (str1 == str2)
		printf("str1 �M str2�O�۵���\n");
	else
		printf("str1 �M str2�O���۵���\n");

	if (str1 == str3)
		printf("str1 �M str3�O�۵���\n");
	else
		printf("str1 �M str3�O���۵���\n");

	_getch();
	return 0;
}