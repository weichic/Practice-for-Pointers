/* mystringCopy.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void myStringCopy(char *, char *);

int main()
{
	int length = 0;
	char str2[80];
	char *str1 = "Apple iPod";

	printf("�I�s�r��w�s���: strcpy()...\n");
	strcpy(str2, str1);
	printf("str2 = %s\n\n", str2);

	/* using my method */
	myStringCopy(str2, str1);
	printf("�I�s�ϥΪ̦ۭq���: myStringCopy()...\n");
	printf("str2 = %s\n", str2);

	_getch();
	return 0;
}

void myStringCopy(char *dest, char *source)
{
	while ((*dest = *source) != '\0') {
		source++;
		dest++;
	}
}