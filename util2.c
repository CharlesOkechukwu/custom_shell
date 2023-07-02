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

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(const char *s1, const char *s2)
{
	int slen1, slen2, len, strval, i;

	slen1 = _strlen(s1);
	slen2 = _strlen(s2);
	if (slen1 > slen2)
		len = slen1;
	else
		len = slen2;
	for (i = 0; i < len; i++)
	{
		strval = s1[i] - s2[i];
		if (strval != 0)
			return (strval);
	}
	return (strval);
}
