// practice2-1.cpp
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int k = 100;
	int &r = k;
	cout << "k=" << k << ", r=" << r;
	r = 200;
	cout << endl;
	cout << "k=" << k << ", r=" << r;

	system("PAUSE");
	return 0;
}