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
	printf("請輸入你的姓名: ");
	scanf("%s", st1.name);

	printf("請輸入你C語言的分數: ");
	scanf("%d", &st1.score);

	printf("\n請輸入另一同學的姓名: ");
	scanf("%s", st2->name);

	printf("請輸入另一同學C語言的分數: ");
	scanf("%d", &st2->score);

	printf("\n%s\'s C score is %d\n", st1.name, st1.score);
	printf("%s\'s C score is %d\n", st2->name, st2->score);
	free(st2);

	_getch();
	return 0;
}