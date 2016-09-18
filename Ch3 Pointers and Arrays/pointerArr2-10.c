/* pointerArr2-10.c */
#include <stdio.h>
#include <conio.h>

int main()
{
	int k[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	printf("&k[1][2] = %p\n", &k[1][2]);
	printf("k[1][2] = %d\n", k[1][2]);
	printf("*(k + 1) + 2 = %p\n", *(k + 1) + 2);
	printf("*(*(k + 1) + 2) = %d\n", *(*(k + 1) + 2));
	printf("k[1] + 2 = %p\n", k[1] + 2);
	printf("*(k[1] + 2) = %d\n", *(k[1] + 2));

	_getch();
	return 0;
}