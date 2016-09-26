// variableRef10.cpp
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int k = 100;
	int &r = k;
	int *p = &k;

	cout << "&k=" << &k << endl;
	cout << "&r=" << &r << endl;
	cout << "&p=" << &p << endl;
	cout << "p=" << p << endl << endl;

	cout << "k=" << k << endl;
	cout << "r=" << r << endl;
	cout << "*p=" << *p << endl << endl;

	r++;
	cout << "k=" << k << endl;
	cout << "r=" << r << endl;
	cout << "*p=" << *p << endl << endl;

	k++;
	cout << "k=" << k << endl;
	cout << "r=" << r << endl;
	cout << "*p=" << *p << endl << endl;

	return 0;
}