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
	printf("�п�J�r��str: ");
	scanf("%s", str);
	printf("��J�r��str�� %s\n", str);
	printf("�п�J���j�M���r��: ");
	scanf("\n%c", &c);
	printf("��J�r��c�� %c\n", c);
	addr = mystrchr(str, c);

	if (addr == 80)
		printf("���r���ä��b�r�ꤤ\n");
	else
		printf("���r���b�r�ꪺ��%d��}\n", addr);

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