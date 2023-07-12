#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char *ptr = "-1234b", *nstr = "bbb44";
	int a, b;

	a = _atoi(ptr);
	b = _atoi(nstr);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}

