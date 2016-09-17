/* constPointer.c */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a = 100, b = 200;

	const int *p = &a;
	int * const q = &b;
	printf("a = %d, *p = %d\n", a, *p);
	printf("b = %d, *q = %d\n", b, *q);

	/* 不可利用*p間接更改a變數值
	 *p = b;
	*/

	/* 但可以將p指標指向另一變數的位址 */
	p = &b;
	printf("*p = %d\n", *p);

	/* =============================== */

	/* 不可更改q指標指向另一變數的位址
	q = &a;
	*/

	/* 但可以利用q指標間接更改b變數值 */
	*q = 888;
	printf("*q = %d\n", *q);

	_getch();
	return 0;
}