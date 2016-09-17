/* onePointer.c */
#include <stdio.h>
#include <conio.h>
int main()
{
	int x = 100, y = 200;
	int *ptr = &x;
	printf("x 變數所在的位址為 %p, 值為 %d\n", &x, x);
	printf("y 變數所在的位址為 %p, 值為 %d\n", &y, y);
	printf("ptr 變數所在的位址為 %p\n\n", &ptr);

	printf("ptr變數裡面所放的內容為 %p\n", ptr);
	printf("x = %d, *ptr = %d\n\n", x, *ptr);

	ptr = &y;
	printf("ptr 變數裡面所放的內容為 %p\n", ptr);
	printf("y = %d, *ptr = %d\n", y, *ptr);
	_getch();
	return 0;
}