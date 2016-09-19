/* functionCall-5.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
double calAverage(double, double);
int main()
{
	double x, y, aver;
	printf("請輸入x與y的浮點數: ");
	scanf("%lf %lf", &x, &y);
	aver = calAverage(x, y);
	printf("x與y的平均數為: %.2f\n", aver);

	_getch();
	return 0;
}

double calAverage(double a, double b)
{
	double average;
	average = (a + b) / 2;
	return average;
}