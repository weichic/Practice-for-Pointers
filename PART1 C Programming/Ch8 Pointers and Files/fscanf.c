/* fscanf.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char id[10];
	int score;
	FILE *fptr;
	if ((fptr = fopen("score.dat", "r")) == NULL) {
		printf("µLªk¶}±Òscore.dat");
		exit(1);
	}
	printf("%-10s %-10s\n", "id", "score");
	printf("=========================\n");
	while (fscanf(fptr, "%s %d", id, &score) != EOF)
		printf("%-10s %3d\n", id, score);
	fclose(fptr);

	_getch();
	return 0;
}