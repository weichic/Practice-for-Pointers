/* fprintf.c */
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
	if ((fptr = fopen("score.dat", "w")) == NULL) {
		printf("�L�k�}��score.dat");
		exit(1);
	}
	/* �Q�Τ��w�ưj��A��id�Mscore��-1�P-1�ɪ�ܵ��� */
	do {
		printf("�п�Jid�Pscore(��J-1 -1����): ");
		scanf("%s %d", id, &score);
		if (strcmp(id, "-1") != 0 && score != -1)
			fprintf(fptr, "%s %d\n", id, score);
	} while (strcmp(id, "-1") != 0 && score != -1);
	fclose(fptr);

	_getch();
	return 0;
}