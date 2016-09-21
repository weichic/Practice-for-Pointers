/* structure10-bugs.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	struct student {
		char name[20];
		int score;
	};

	struct student st1, *st2;
	printf("Please input your name: ");
	scanf("%s", st1.name);

	printf("Your C score: ");
	scanf("%d", st1.score);

	printf("Please input #2 student name: ");
	scanf("%s", st2->name);

	printf("#2 student C score: ");
	scanf("%d", st2->score);

	printf("%s\'s C score is %d\n", st1.name, st1.score);
	printf("%s\'s C score is %d\n", st2->name, st2->score);

	_getch();
	return 0;
}