// callByReference.cpp
#include <iostream>
#include <conio.h>
void callByReference(int &);
using namespace std;

int main()
{
	int k = 100;
	cout << "The address of k is " << &k << endl;
	cout << "k=" << k << endl;
	callByReference(k);
	cout << "©I¥scallByReference¨ç¼Æ¤§«á...\n";
	cout << "k=" << k << endl;

	return 0;
}

void callByReference(int &x)
{
	cout << "The address of x is " << &x << endl;
	x += 1000;
}