/* exercise2-1.c */
#include <stdio.h>
#include <conio.h>
int main()
{
	char *diamond = "5�J���p��";
	char *p1 = diamond;
	char **p2 = &p1;
	char ***p3 = &p2;

	printf("diamond = %p\n", diamond);
	printf("&p1 = %p, p1 = %p\n", &p1, p1);
	printf("&p2 = %p, p2 = %p\n", &p2, p2);
	printf("&p3 = %p, p3 = %p\n", &p3, p3);

	printf("�H�U����k�i�o���p��: \n");
	printf("**p3 = %s, *p2 = %s, p1 = %s, diamond = %s\n", **p3, *p2, p1, diamond);
	_getch();
	return 0;
}