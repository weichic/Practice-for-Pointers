// practice2-2.cpp
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
	says y;
	y = calls(x);
	cout << "It's #" << y.times << " called" << endl << endl;

	y = calls(x);
	cout << "It's #" << y.times << " called" << endl << endl;

	system("PAUSE");
	return 0;
}

says & calls(says & ref)
{
	says *p = new says;
	*p = ref;
	cout << p->word << endl;
	p->times++;
	return *p;
}