/* basicStruct-2.c */
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
	st2 = (struct student*) malloc(sizeof(struct student));
	printf("�п�J�A���m�W: ");
	scanf("%s", st1.name);

	printf("�п�J�AC�y��������: ");
	scanf("%d", &st1.score);

	printf("\n�п�J�t�@�P�Ǫ��m�W: ");
	scanf("%s", st2->name);

	printf("�п�J�t�@�P��C�y��������: ");
	scanf("%d", &st2->score);

	printf("\n%s\'s C score is %d\n", st1.name, st1.score);
	printf("%s\'s C score is %d\n", st2->name, st2->score);
	free(st2);

	_getch();
	return 0;
}