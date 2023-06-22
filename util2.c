#include "shell.h"

/**
 * _strcat - concatenate two strings
 * @dest: concatenated string
 * @src: the string to concatenate
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	if (dest == NULL || src == NULL)
		return NULL;
	len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
