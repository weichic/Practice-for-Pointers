/* stringCopyBugsFixed.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int stringCompare_n(char *, char *, int);

int main()
{
	char *s = "iPhone";
	char t[80] = " ";
	printf("Before strcpy(t, s)\n");
	printf("s = %s\n", s);
	printf("t = %s\n", t);
	strcpy(t, s);
	printf("After strcpy(t, s)\n");
	printf("s = %s\n", s);
	printf("t = %s\n", t);

	_getch();
	return 0;
}