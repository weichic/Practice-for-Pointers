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
		printf("無法開啟student.rec");
		exit(1);
	}
	fseek(fptr, 0, 2);
	length = ftell(fptr);
	total_rec = length / sizeof(struct node);
	printf("目前有%d筆資料在檔案中\n", total_rec);

	do {
		printf("\n 請問你要尋找哪一筆: ");
		scanf("%d", &number);
		offset = (number - 1) * sizeof(student);
		if (number > total_rec)
			printf("此筆資料不存在\n");
		else {
			fseek(fptr, offset, 0);
			fread(&student, sizeof(student), 1, fptr);
			printf("\n此筆資料如下: \n");
			printf("姓名: %s\n", student.name);
			printf("分數: %d\n", student.score);
		}
		printf("繼續否(y/n)? ");
		ch = _getche();
	} while (ch == 'y');

	fclose(fptr);
	printf("\n");

	_getch();
	return 0;
}