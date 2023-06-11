#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char *str = "Charles";
	int len, i = 0;

	len = _strlen(str);
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

