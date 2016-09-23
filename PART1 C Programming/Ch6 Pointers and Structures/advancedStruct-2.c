/* advancedStruct-2.c */
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
	struct student st = {"John", 97};
	struct student *ptr = &st;

	printf("ptr->name = %s\n", ptr->name);
	printf("*(ptr->name) = %c\n", *(ptr->name));
	printf("++(*ptr->name) = %c\n", ++*(ptr->name));
	printf("ptr->name = %s\n", ptr->name);
	printf("ptr->score = %d\n", ptr->score);
	printf("ptr->score++ = %d\n", (ptr->score)++);
	printf("ptr->score = %d\n", ptr->score);

	_getch();
	return 0;
}