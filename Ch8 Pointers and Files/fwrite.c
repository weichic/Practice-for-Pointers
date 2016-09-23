/* fwrite.c */
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
	if ((fptr = fopen("student.rec", "wb")) == NULL) {
		printf("µLªk¶}±Òstudent.rec");
		exit(1);
	}
	do {
		printf("\n\nEnter name: ");
		gets(student.name);
		printf("Enter score: ");
		student.score = atoi(gets(scorebuf));
		fwrite(&student, sizeof(student), 1, fptr);
		printf("One more(y/n)? ");
	} while (_getche() == 'y');
	fclose(fptr);

	_getch();
	return 0;
}