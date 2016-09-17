/* address-3.c */
#include <stdio.h>
#include <conio.h>
int main()
{
	int x = 100, y = 200, z = 300;
	printf("x Variable Address is: %p\n", &x);
	printf("y Variable Address is: %p\n", &y);
	printf("z Variable Address is: %p\n\n", &z);

	printf("x Variable Content is: %d\n", x);
	printf("y Variable Content is: %d\n", y);
	printf("z Variable Content is: %d\n", z);
	getchar();
	return 0;
}
