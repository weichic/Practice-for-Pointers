/* fseek.c */
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
	int number, length, total_rec;
	char ch;
	int offset;
	if ((fptr = fopen("student.rec", "rb")) == NULL) {
		printf("�L�k�}��student.rec");
		exit(1);
	}
	fseek(fptr, 0, 2);
	length = ftell(fptr);
	total_rec = length / sizeof(struct node);
	printf("�ثe��%d����Ʀb�ɮפ�\n", total_rec);

	do {
		printf("\n �аݧA�n�M����@��: ");
		scanf("%d", &number);
		offset = (number - 1) * sizeof(student);
		if (number > total_rec)
			printf("������Ƥ��s�b\n");
		else {
			fseek(fptr, offset, 0);
			fread(&student, sizeof(student), 1, fptr);
			printf("\n������Ʀp�U: \n");
			printf("�m�W: %s\n", student.name);
			printf("����: %d\n", student.score);
		}
		printf("�~��_(y/n)? ");
		ch = _getche();
	} while (ch == 'y');

	fclose(fptr);
	printf("\n");

	_getch();
	return 0;
}