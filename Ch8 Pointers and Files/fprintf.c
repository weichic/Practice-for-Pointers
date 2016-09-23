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
		printf("無法開啟score.dat");
		exit(1);
	}
	/* 利用不定數迴圈，當id和score為-1與-1時表示結束 */
	do {
		printf("請輸入id與score(輸入-1 -1結束): ");
		scanf("%s %d", id, &score);
		if (strcmp(id, "-1") != 0 && score != -1)
			fprintf(fptr, "%s %d\n", id, score);
	} while (strcmp(id, "-1") != 0 && score != -1);
	fclose(fptr);

	_getch();
	return 0;
}