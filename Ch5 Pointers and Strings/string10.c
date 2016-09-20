/* string10.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char *str1 = "Learning pointer now!";
	char str2[10] = "Go ahead";
	char *str3;
	char str4[20];
	
	str3 = "I want to buy iPad\n";
	printf("C or C++: ");
	scanf("%s", str4);

	printf("\n%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("Learning %s now\n", str4);

	_getch();
	return 0;
}