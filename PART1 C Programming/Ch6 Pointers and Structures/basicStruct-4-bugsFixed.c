/* basicStruct-4-bugsFixed.c */
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

	printf("�п�J�Ĥ@��P�Ǫ��m: ");
	scanf("%s", st1.firstname);       /* ���i�H�ϥΫ��w�B��l */
	printf("�п�J�Ĥ@��P�Ǫ��W: ");
	st1.lastname = (char*)malloc(sizeof(char));
	scanf("%s", st1.lastname);

	printf("�п�J%s%s C�y��������: ", st1.firstname, st1.lastname);
	scanf("%d", &st1.score);

	st2 = (struct student*) malloc(sizeof(struct student));
	printf("�п�J�ĤG��P�Ǫ��m: ");
	scanf("%s", st2->firstname);       /* ���i�H�ϥΫ��w�B��l */
	printf("�п�J�ĤG��P�Ǫ��W: ");
	st2->lastname = (char*)malloc(sizeof(char));
	scanf("%s", st2->lastname);

	printf("�п�J%s%s C�y��������: ", st2->firstname, st2->lastname);
	scanf("%d", &st2->score);

	printf("\n%s%s �� C�y�����ƬO %d\n", st1.firstname, st1.lastname, st1.score);
	printf("%s%s �� C�y�����ƬO %d\n", st2->firstname, st2->lastname, st2->score);

	free(st2);

	_getch();
	return 0;
}