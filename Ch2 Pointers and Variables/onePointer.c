/* onePointer.c */
#include <stdio.h>
#include <conio.h>
int main()
{
	int x = 100, y = 200;
	int *ptr = &x;
	printf("x �ܼƩҦb����}�� %p, �Ȭ� %d\n", &x, x);
	printf("y �ܼƩҦb����}�� %p, �Ȭ� %d\n", &y, y);
	printf("ptr �ܼƩҦb����}�� %p\n\n", &ptr);

	printf("ptr�ܼƸ̭��ҩ񪺤��e�� %p\n", ptr);
	printf("x = %d, *ptr = %d\n\n", x, *ptr);

	ptr = &y;
	printf("ptr �ܼƸ̭��ҩ񪺤��e�� %p\n", ptr);
	printf("y = %d, *ptr = %d\n", y, *ptr);
	_getch();
	return 0;
}