/* exercise3.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void (*pt)(int [], int [], int);
void bubbleSort(int [], int [], int);
void insertionSort(int [], int [], int);
void print(int[], int);

int main()
{
	int i[] = { 10, 40, 5, 100, 20, 60, 2, 50, 7, 80 };
	int j[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int k[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int num = sizeof(i) / sizeof(i[0]);
	printf("Before Sorting\n");
	print(i, num);
	
	printf("Bubble Sort: \n");
	pt = bubbleSort;
	(*pt)(i, j, num);
	print(j, num);

	printf("Insertion Sort: \n");
	pt = insertionSort;
	(*pt)(i, k, num);
	print(k, num);

	_getch();
	return 0;
}

void print(int x[], int num)
{
	int i;
	for (i = 0; i < num; ++i)
		printf("%d ", x[i]);
	printf("\n\n");
}

void bubbleSort(int x[], int out[], int num)
{
	int i, j, temp;
	for (i = 0; i < num; ++i)
		out[i] = x[i];

	for (i = 0; i < (num - 1); ++i)
		for (j = i + 1; j < num; ++j)
			if (out[i] < out[j]) {
				temp = out[i];
				out[i] = out[j];
				out[j] = temp;
			}
}

void insertionSort(int x[], int out[], int num)
{
	int i, j, k;
	for (i = 0; i < num; ++i){
		for (j = 0; j < i; ++j){
			if (x[i] > out[j])
				break;
		}
		if (j == i)
			out[j] = x[i];
		else {
			for (k = i; k > j; --k)
				out[k] = out[k - 1];
			out[j] = x[i];
		}
	}
}