/* pointerBugsFixed.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 120;
	int *p = &num;
	printf("The address of p is %#x\n", &p);
	printf("*p = %d\n\n", *p);
	system("PAUSE");
	return 0;
}