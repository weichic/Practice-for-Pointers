/* rewind.c */
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
	if ((fptr = fopen("student.rec", "rb")) == NULL) {
		printf("�L�k�}�� student.rec");
		_getch();
		exit(1);
	}
	printf("name            score\n");
	printf("=======================\n");
	while (fread(&student, sizeof(student), 1, fptr) == 1) {
		printf("%-10s %3d", student.name, student.score);
		printf(" (Current address of file pointer: %d)\n", ftell(fptr));
	}
	printf("\n�A��ܤ@��\n");
	rewind(fptr);
	while (fread(&student, sizeof(student), 1, fptr) == 1) {
		printf("%-10s %3d", student.name, student.score);
		printf(" (Current address of file pointer: %d)\n", ftell(fptr));
	}

	fclose(fptr);
	printf("\n");

	_getch();
	return 0;
}