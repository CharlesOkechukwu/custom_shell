#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char str1[] = "charles", str2[] = "moboy", str3[] = "charles", str4[] = "prince", str5[] = "Prince";

	printf("%d\n", _strcmp(str1, str2));
	printf("%d\n", _strcmp(str1, str3));
	printf("%d\n", _strcmp(str4, str5));
	return (0);
}

