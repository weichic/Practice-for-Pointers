/* fgetpos-1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	FILE *fptr;
	fpos_t curpos;
	char buffer1[81], buffer2[81];
	if ((fptr = fopen("score.dat", "r")) == NULL) {
		printf("�ɮ׵L�k�}��");
		_getch();
		exit(1);
	}
	if (fgetpos(fptr, &curpos) != 0)
		perror("fgetpos ����\n");
	fgets(buffer1, 27, fptr);
	if (fsetpos(fptr, &curpos) != 0)
		perror("fsetpos ����\n");
	fgets(buffer2, 27, fptr);

	printf("�H�U�Obuffer1�Mbuffer2�w�İϪ����\n");
	printf("Buffer1: %s\n", buffer1);
	printf("Buffer2: %s\n", buffer2);

	fclose(fptr);

	_getch();
	return 0;
}