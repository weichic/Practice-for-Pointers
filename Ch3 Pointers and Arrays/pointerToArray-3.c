/* pointerToArray-3.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i[3][2] = { { 1, 2 }, { 3, 4 }, {5, 6} };
	int k;
	int(*pi)[2];
	pi = i;

	for (k = 0; k < 3; ++k)
		printf("pi + %d = %#x\n", k, pi+k);

	printf("*pi = %#x\n", *pi);
	printf("*pi+�� = %#x\n", *pi+1);

	printf("pi[0][0] = %d\n", pi[0][0]);
	printf("pi[1][0] = %d\n", pi[1][0]);

	printf("(*(*(pi + 1) + 1)) = %x\n", (*(*(pi + 1) + 1)));
	printf("*(*pi + ��) = %d\n", *(*pi + 1));

	_getch();
	return 0;
}