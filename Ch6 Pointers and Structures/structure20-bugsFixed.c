/* structure20-bugsFixed.c */
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

	struct student st1, *st2;
	
	st1.name = "Peter";
	st1.score = 90;

	st2 = (struct student*) malloc(sizeof(struct student));
	st2->name = "Nancy";
	st2->score = 99;

	printf("\n%s\'s C score is %d\n", st1.name, st1.score);
	printf("%s\'s C score is %d\n", st2->name, st2->score);

	free(st2);

	_getch();
	return 0;
}