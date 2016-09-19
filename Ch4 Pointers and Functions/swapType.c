/* swapType.c */
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void swap_by_address(int*, int*);
void swap_by_value(int, int);
int main()
{
	int x = 100, y = 200;
	/* Call by value */
	printf("Call by value\n");
	printf("Before swapping...\n");
	printf("x = %d, y = %d\n", x, y);
	swap_by_value(x, y);
	printf("After swapping...\n");
	printf("x = %d, y = %d\n\n", x, y);

	/* Call by address */
	x = 100; y = 200;
	printf("Call by address\n");
	printf("Before swapping...\n");
	printf("x = %d, y = %d\n", x, y);
	swap_by_address(&x, &y);
	printf("After swapping...\n");
	printf("x = %d, y = %d\n\n", x, y);

	_getch();
	return 0;
}

void swap_by_value(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_by_address(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}