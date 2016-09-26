// structReference9.cpp
#include <iostream>
#include <conio.h>
using namespace std;

struct says {
	char word[20];
	int times;
};

says & calls(says &);

int main()
{
	says x = {"Hello, world", 0};
	x = calls(x);
	cout << "It's #" << x.times << " called" << endl << endl;

	x = calls(x);
	cout << "It's #" << x.times << " called" << endl << endl;

	x = calls(x);
	cout << "It's #" << x.times << " called" << endl << endl;

	return 0;
}

says & calls(says & ref)
{
	says newobj;
	newobj = ref;
	cout << newobj.word << endl;
	newobj.times++;
	return newobj;
}