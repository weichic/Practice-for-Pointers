// swapTwoNumbers.cpp
#include <iostream>
#include <conio.h>
using namespace std;

void swap_by_address(int *, int *);
void swap_by_reference(int &, int &);
void swap_by_value(int, int);

int main()
{
	int x = 100, y = 200;

	/* Call by value */
	x = 100; y = 200;
	cout << "Call by value\n";
	cout << "Before swapping...\n";
	cout << "x=" << x << ", y=" << y << endl;
	swap_by_value(x, y);
	cout << "After swapping...\n";
	cout << "x=" << x << ", y=" << y << endl << endl;

	/* Call by address */
	x = 100; y = 200;
	cout << "Call by address\n";
	cout << "Before swapping...\n";
	cout << "x=" << x << ", y=" << y << endl;
	swap_by_address(&x, &y);
	cout << "After swapping...\n";
	cout << "x=" << x << ", y=" << y << endl << endl;

	/* Call by reference */
	x = 100; y = 200;
	cout << "Call by reference\n";
	cout << "Before swapping...\n";
	cout << "x=" << x << ", y=" << y << endl;
	swap_by_reference(x, y);
	cout << "After swapping...\n";
	cout << "x=" << x << ", y=" << y << endl << endl;

	return 0;
}

void swap_by_value(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_by_address(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_by_reference(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}