/* selfReference-bugsFixed.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	struct student {
		char *name;
		int score;
		struct student *next;
	};
	
	struct student *p, *q, *r;
	p = (struct student*) malloc(sizeof(struct student ));
	p->name = "Bright";
	p->score = 98;

	q = (struct student*) malloc(sizeof(struct student ));
	q->name = "Linda";
	q->score = 95;

	r = (struct student*) malloc(sizeof(struct student ));
	r->name = "Jennifer";
	r->score = 95;

	p->next = q;
	q->next = r;

	/* 使用p指標來印出這三個節點 */
	printf("There are three students in my class\n");
	printf("%s %d\n", p->name, p->score);
	printf("%s %d\n", p->next->name, p->next->score);
	printf("%s %d\n", p->next->next->name, p->next->next->score);

	_getch();
	return 0;
}