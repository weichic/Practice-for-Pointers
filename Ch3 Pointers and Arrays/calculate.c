/* calculate.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 100, b = 2;
	int ans;

	if (argc == 2) {
		switch (argv[1][0]) {
			case '+': ans = a + b; break;
			case '-': ans = a - b; break;
			case '*': ans = a * b; break;
			case '/': ans = a / b; break;
		default:
			printf("Not correct!!!\n\n");
			return 0;
		}
		printf("Ans: %d\n", ans);
		_getch();
	}
	return 0;
}