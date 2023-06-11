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
