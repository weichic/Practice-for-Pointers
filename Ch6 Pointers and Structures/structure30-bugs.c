/* structure30-bugs.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void passOrdown(struct student*);
void output(struct student*);

struct student {
	char name[20];
	int score;
	char passdown[10];
};

int main()
{
	struct student stu[3];
	int i;
	for (i = 0; i < 3; ++i) {
		printf("Please input #%d student name: ", i+1);
		scanf("%s", stu[i].name);

		printf("Please input #%d student\'s C score: ", i + 1);
		scanf("%s", stu[i].score);
	}
	passOrdown(stu);
	output(stu);

	_getch();
	return 0;
}

void passOrdown(struct student *p)
{
	int i;
	for (i = 0; i < 3; ++i) {
		if (p->score >= 60)
			p->passdown = "PASS";
		else
			p->passdown = "DOWN";
		p++;
	}
}

void output(struct student *q)
{
	int i;
	printf("\n\n%10s %10s %20s\n", "Name", "Score", "Pass or Down");
	for (i = 1; i <= 42; ++i)
		printf("=");
	printf("\n");
	for (i = 0; i < 3; ++i)
		printf("%10s %10d %20s\n", q->name, q->score, q->passdown);
}