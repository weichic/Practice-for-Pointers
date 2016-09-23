/* basicStruct-3-bugsFixed.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	struct student {
		char firstname[20];
		char *lastname;
		int score;
	};
	
	struct student st1, *st2;

	printf("請輸入第一位同學的姓: ");
	scanf("%s", st1.firstname);
	st1.lastname = "阿嘉";
	printf("請輸入%s%s C語言的分數: ", st1.firstname, st1.lastname);
	scanf("%d", &st1.score);

	st2 = (struct student*) malloc(sizeof(struct student));
	printf("\n請輸入第二位同學的姓: ");
	scanf("%s", st2->firstname);
	st2->lastname = "友子";
	printf("請輸入%s%s C語言的分數: ", st2->firstname, st2->lastname);
	scanf("%d", &st2->score);

	printf("\n%s%s 的 C語言分數是 %d\n", st1.firstname, st1.lastname, st1.score);
	printf("\n%s%s 的 C語言分數是 %d\n", st2->firstname, st2->lastname, st2->score);

	free(st2);

	_getch();
	return 0;
}