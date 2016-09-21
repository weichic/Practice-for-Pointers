/* selfReference-1-bugs.c */
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
	
	struct student *p, *q, *r, *current;
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
	current = p;
	while (current->next != NULL) {
		printf("%10s %10d\n", current->name, current->score);
		current = current->next;
	}

	_getch();
	return 0;
}