/* structure50-bugs.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i;
	struct student {
		char *name;
		int i;
		struct student *next;
	};
	struct student stu[] = { { "Miffy", 1, stu + 1 }, { "Nancy", 2, stu + 2 }, {"Peter", 3, stu} };
	struct student *p = stu;
	printf("%s %s %s\n", stu[0].name, (++p)->name, stu[1].next->name);

	for (i = 0; i <= 2; ++i) {
		printf("%d ", --stu[i].i);
		printf("%c\n", ++stu[i].name[2]);
	}

	printf("%s %s %s\n", (p->name), stu[p->i].name, stu[--(p->next->i)].name);

	_getch();
	return 0;
}