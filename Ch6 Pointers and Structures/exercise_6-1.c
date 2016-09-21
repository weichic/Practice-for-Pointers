/* exercise_6-1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	struct student {
		char *name;
		int score;
	};
	
	struct student s = {"Mary", 90};
	struct student *p = &s;
	printf("s.name = %s\n", s.name);
	printf("s.score = %d\n", s.score);
	printf("p->name = %s\n", p->name);
	printf("p->score = %d\n", p->score);
	printf("(*p).name = %s\n", (*p).name);
	printf("(*p).score = %d\n", (*p).score);

	_getch();
	return 0;
}