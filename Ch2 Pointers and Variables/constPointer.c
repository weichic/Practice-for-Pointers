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

	/* ���i�Q��*p�������a�ܼƭ�
	 *p = b;
	*/

	/* ���i�H�Np���Ы��V�t�@�ܼƪ���} */
	p = &b;
	printf("*p = %d\n", *p);

	/* =============================== */

	/* ���i���q���Ы��V�t�@�ܼƪ���}
	q = &a;
	*/

	/* ���i�H�Q��q���ж������b�ܼƭ� */
	*q = 888;
	printf("*q = %d\n", *q);

	_getch();
	return 0;
}