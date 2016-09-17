/* address2Array-10.c */
#include <stdio.h>
#include <conio.h>
int main()
{
	int x[][3] = { 10, 20, 30, 40, 50, 60};
	int i, j;

	printf("x = %#x, &x[0][0] = %#x\n", x, &x[0][0]);

	printf("\n");
	for (i = 0; i < 2; ++i)
		printf("x[%d] is %#x\n", i, x[i]);

	printf("\n");
	for (j = 0; j < 6; ++j)
		printf("x[0] + %d is %#x\n", j, x[0] + j);

	printf("\n");
	for (j = 0; j < 3; ++j)
		printf("x[1] + %d is %#x\n", j, x[1] + j);

	printf("\n");
	for (i = 0; i < 2; ++i)
		printf("x + %d is %#x\n", i, x + i);

	_getch();
	return 0;
}