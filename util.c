#include "shell.h"

/**
 * _putchar - print a character
 * @c: character to print
 *
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - count the length of a string
 * @s: string to count
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _puts - print string
 * @s: string to print
 *
 * Return: void
 */

void _puts(char *s)
{
	int len, i = 0;

	if (s != NULL)
	{
		len = _strlen(s);
		while (i < len)
		{
			_putchar(s[i]);
			i++;
		}
	}
}
