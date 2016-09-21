/* exercise_6-3.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct s1 {
	char *s;
	int n;
	struct s1 *ptr;
};

struct s1 a[] = { { "abcd", 1, a + 1 }, { "efgh", 2, a + 2 }, { "ijkl", 3, a} };

struct s1 *p = a;

int main()
{
	int i;
	printf("%s\n", a[0].s);
	printf("%s\n", p->s);
	printf("%s\n", a[2].ptr->s);

	for (i = 0; i < 2; ++i) {
		printf("------------\n");
		printf("i = %d\n", i);
		printf("%d\n", --a[i].n);
		printf("%c\n", a[i].s[3]);
	}

	printf("..........\n");
	printf("%s\n", ++(p->s));
	printf("%s\n", a[(++p)->n].s);
	printf("%s\n", a[--(p->ptr->n)].s);

	_getch();
	return 0;
}