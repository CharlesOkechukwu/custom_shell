#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char str[16] = "Charles", str2[] = "Okechukwu";

	_strcat(str, str2);
	_puts(str);
	_putchar('\n');
	return (0);
}

