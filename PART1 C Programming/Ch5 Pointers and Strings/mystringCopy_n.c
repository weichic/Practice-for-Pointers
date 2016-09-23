/* mystringCopy_n.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void myStringCopy_n(char *, char *, int n);

int main()
{
	int length = 0;
	char str2[80];
	char *str1 = "Apple iPod";
	char str3[80];

	printf("�I�s�r��w�s���: strncpy()...\n");
	strncpy(str2, str1, 5);
	str2[5] = '\0';
	printf("str2 = %s\n\n", str2);

	/* using my method */
	myStringCopy_n(str3, str1, 5);
	str3[5] = '\0';
	printf("�I�s�ϥΪ̦ۭq���: myStringCopy_n()...\n");
	printf("str3 = %s\n", str3);

	_getch();
	return 0;
}

void myStringCopy_n(char *dest, char *source, int n)
{
	int i = 1;

	while ((i <= n) && (*dest = *source) != '\0') {
		source++;
		dest++;
		i++;
	}
}