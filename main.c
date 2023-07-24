#include "shell.h"

/**
 * main - entrance of code
 *
 * Return: int
 */

int main(void)
{
	char *lineptr = NULL;

	lineptr = _getline(stdin);
	if (lineptr == NULL)
	{
		printf("error on end of file\n");
		free(lineptr);
	}
	printf("%s", lineptr);
	return (0);
}

