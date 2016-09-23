/* stringBugsFixed10.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int stringCompare_n(char *, char *, int);

int main()
{
	char *str1 = "Learning pointer now!";
	char str2[] = "Go ahead";
	char str3[20];
	char *str4;

	str4 = "I want to buy an iPod\n";
	printf("C or C++: ");
	scanf("%s", str3);

	printf("\n%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str4);
	printf("Learning %s now\n", str3);

	_getch();
	return 0;
}