/* pointerArrayBugs10.c */
#include <stdio.h>
#include <conio.h>

int main()
{
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr;
	int i, num;
	num = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i <= num; ++i)
		printf("arr[%d] = %d\n", i, arr[i]);

	printf("\n");
	for (i = 0; i <= num; ++i)
		printf("*(p + %d) = %d\n", i, *(p +¢ñ));

	printf("\n");
	for (i = 0; i <= num; ++i)
		printf("*p++ = %d\n", i, *p++);

	printf("\n");
	for (i = 0; i <= num; ++i)
		printf("*arr++ = %d\n", i, *arr++);

	_getch();
	return 0;
}