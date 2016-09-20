/* stringConcate.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void stringConcate(char *, char *);

int main()
{
	char str2[80] = "I want to buy a ";
	char *str1 = "Apple iPod";
	char str3[80] = "I want to buy a ";

	printf("�I�s�r��w�s���: strcat()...\n");
	strcat(str2, str1);
	printf("str2 = %s\n\n", str2);

	/* using my method */
	stringConcate(str3, str1);
	printf("�I�s�ϥΪ̦ۭq���: stringConcate()...\n");
	printf("str3 = %s\n", str3);

	_getch();
	return 0;
}

void stringConcate(char *dest, char *source)
{
	while (*dest != '\0')
		dest++;

	while ((*dest = *source) != '\0') {
		source++;
		dest++;
	}
}