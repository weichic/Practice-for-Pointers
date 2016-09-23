/* fread.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	struct node {
		char name[10];
		int score;
	};
	struct node student;
	FILE *fptr;
	char scorebuf[81];
	if ((fptr = fopen("student.rec", "rb")) == NULL) {
		printf("µLªk¶}±Òstudent.rec");
		exit(1);
	}
	printf("%-10s %-10s\n", "name", "score");
	printf("====================\n");
	while (fread(&student, sizeof(student), 1, fptr) == 1)
		printf("%-10s %3d\n", student.name, student.score);
	fclose(fptr);

	_getch();
	return 0;
}