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
	printf("str1���V����}: %#x\n", str1);
	printf("str2���V����}: %#x\n", str2);

	if (str1 == str2)
		printf("str1 �M str2�O�۵���\n");
	else
		printf("str1 �M str2�O���۵���\n");

	_getch();
	return 0;
}