/* exercise1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int mystrchr(char *, char);

int main()
{
	char str[80];
	char c;
	int addr;
	printf("請輸入字串str: ");
	scanf("%s", str);
	printf("輸入字串str為 %s\n", str);
	printf("請輸入欲搜尋之字元: ");
	scanf("\n%c", &c);
	printf("輸入字元c為 %c\n", c);
	addr = mystrchr(str, c);

	if (addr == 80)
		printf("此字元並不在字串中\n");
	else
		printf("此字元在字串的第%d位址\n", addr);

	_getch();
	return 0;
}

int mystrchr(char *x, char y)
{
	int addr = 0;
	while ((*(x + addr) != '\0') && (*(x + addr) != y))
		addr++;

	if (*(x + addr) == '\0')
		return 80;
	else
	    return addr;
}