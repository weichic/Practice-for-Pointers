/* functionCall-5.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
double calAverage(double, double);
int main()
{
	double x, y, aver;
	printf("�п�Jx�Py���B�I��: ");
	scanf("%lf %lf", &x, &y);
	aver = calAverage(x, y);
	printf("x�Py�������Ƭ�: %.2f\n", aver);

	_getch();
	return 0;
}

double calAverage(double a, double b)
{
	double average;
	average = (a + b) / 2;
	return average;
}