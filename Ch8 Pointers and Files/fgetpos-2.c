/* fgetpos-2.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	FILE *fptr;
	fpos_t curpos;
	char buffer1[81], buffer2[81], buffer3[3];
	if ((fptr = fopen("bufferArea.dat", "r")) == NULL) {
		printf("檔案無法開啟");
		_getch();
		exit(1);
	}
	if (fgetpos(fptr, &curpos) != 0)
		perror("fgetpos 失敗\n");
	printf("curpos目前指向的位址是: %d\n", curpos);
	printf("fptr目前指向的位址是: %d\n\n", ftell(fptr));

	fgets(buffer1, 10, fptr);
	printf("curpos目前指向的位址是: %d\n", curpos);
	printf("fptr目前指向的位址是: %d\n\n", ftell(fptr));
	printf("Buffer1: %s\n", buffer1);
	
	fgets(buffer2, 8, fptr);
	printf("curpos目前指向的位址是: %d\n", curpos);
	printf("fptr目前指向的位址是: %d\n\n", ftell(fptr));
	printf("Buffer2: %s\n", buffer2);

	printf("Reset fptr指標: \n");
	if (fsetpos(fptr, &curpos) != 0)
		perror("fsetpos 失敗\n");
	printf("curpos目前指向的位址是: %d\n", curpos);
	printf("fptr目前指向的位址是: %d\n\n", ftell(fptr));

	fgets(buffer3, 27, fptr);
	printf("讀取27字元後....\n");
	printf("curpos目前指向的位址是: %d\n", curpos);
	printf("fptr目前指向的位址是: %d\n\n", ftell(fptr));
	printf("Buffer3: %s\n", buffer3);

	fclose(fptr);

	_getch();
	return 0;
}