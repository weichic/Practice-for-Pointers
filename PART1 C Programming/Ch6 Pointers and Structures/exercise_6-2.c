/* exercise_6-2.c */
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
	
	struct student st[] = { { "John", 92 }, { "Mary", 88 }, {"Nancy", 90} };
	struct student *ptr = st;
	printf("%s\n", ptr->name);
	printf("%d\n", ptr->score);
	printf("%s\n", (++ptr)->name);
	printf("%d\n", ptr->score);
	ptr++;
	printf("%s\n", ptr->name);
	printf("%d\n", ptr->score);

	_getch();
	return 0;
}