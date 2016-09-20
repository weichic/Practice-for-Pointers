/* string3.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	char *str = "Apple iPod";
	int i;
	printf("¦r¦êstr¬°: ");
	for (i = 0; *str != '\0'; ++i){
		printf("%c", *str);
		str++;
	}

	_getch();
	return 0;
}