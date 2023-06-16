#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char str[] = "Charles",  str_cpy[8];

	_strcpy(str_cpy, str);
	_puts(str_cpy);
	_putchar('\n');
	return (0);
}

