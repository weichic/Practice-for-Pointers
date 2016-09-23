/* pointerToFunction.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int add(int , int);
int substract(int, int);
int multiply(int, int);
int divide(int, int);
int (*operation)(int, int);

int main()
{
	int x, y, output;
	printf("½Ð¿é¤Jx»Py: ");
	scanf("%d %d", &x, &y);
	operation = add;
	output = (*operation)(x, y);
	printf("%d + %d = %d\n", x, y, output);

	operation = substract;
	output = (*operation)(x, y);
	printf("%d - %d = %d\n", x, y, output);

	operation = multiply;
	output = (*operation)(x, y);
	printf("%d * %d = %d\n", x, y, output);

	operation = divide;
	output = (*operation)(x, y);
	printf("%d / %d = %d\n", x, y, output);

	_getch();
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int substract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}