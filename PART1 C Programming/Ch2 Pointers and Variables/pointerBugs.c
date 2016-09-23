/* pointerBugs.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p;
	*p = 120;
	printf("The address of p is %#x", p);
	printf("*p = %d\n");
	system("PAUSE");
	return 0;
}