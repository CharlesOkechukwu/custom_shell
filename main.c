#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char *str = "Charles Okechukwu", *str_cpy;

	str_cpy = _strdup(str);
	_puts(str_cpy);
	_putchar('\n');
	free(str_cpy);
	return (0);
}

