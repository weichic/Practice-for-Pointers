// callByValue.cpp
#include <iostream>
#include <conio.h>
void callByValue(int);
using namespace std;

int main()
{
	int k = 100;
	cout << "The address of k is " << &k << endl;
	cout << "k=" << k << endl;
	cout << "©I¥scallByValue¨ç¼Æ¤§«á...\n";
	callByValue(k);
	cout << "k=" << k << endl;

	return 0;
}

void callByValue(int x)
{
	cout << "The address of x is " << &x << endl;
	x += 1000;
}