/* addressBugs5.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x, y, average;
	printf("�п�J�B�I��x�Py: ");
	scanf("%lf %lf", x, y);
	average = (x + y)/2;
	printf("x�Py�������Ƭ�: %.2f\n", &average);
	system("PAUSE");
	return 0;
}