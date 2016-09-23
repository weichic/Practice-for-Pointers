/* stringConcate_n.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void stringConcate_n(char *, char *, int);

int main()
{
	char str2[80] = "I want to buy a ";
	char *str1 = "Apple iPod";
	char str3[80] = "I want to buy a ";

	printf("呼叫字串庫存函數: strncat()...\n");
	strncat(str2, str1, 5);
	printf("str2 = %s\n\n", str2);

	/* using my method */
	stringConcate_n(str3, str1, 5);
	printf("呼叫使用者自訂函數: stringConcate_n()...\n");
	printf("str3 = %s\n", str3);

	_getch();
	return 0;
}

void stringConcate_n(char *dest, char *source, int n)
{
	int i = 1;

	while (*dest != '\0')
		dest++;

	while ( i<= n && (*dest = *source) != '\0') {
		source++;
		dest++;
		i++;
	}
}