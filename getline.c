#include "shell.h"

/**
 * _realloc - re allocate memory with malloc
 * @ptr: pointer
 * @size: size to reallocate
 *
 * Return: void
 */

void *_realloc(void *ptr, size_t size)
{
	void *newptr;

	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(size);
		if (newptr == NULL)
			return (NULL);
	}
	else
	{
		newptr = malloc(size);
		if (newptr == NULL)
			return (NULL);
		_memcpy(newptr, ptr, size);
	}
	free(ptr);
	return (newptr);
}

/**
 * _memcpy - copies bytes of one memory to the other
 * @dest: destination ptr
 * @src: source pointer
 * @size: size to copy
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, size_t size)
{
	unsigned int i = 0;

	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _getline - custom getline function
 * @stream: file stream
 *
 * Return: char
 */

char *_getline(FILE *stream)
{
	int i = 0, rd;
	char ch = 0;
	int size = BUFFSIZE;
	char *buff;

	buff = malloc(sizeof(char) * size);
	if (buff == NULL)
		return (NULL);
	while (ch != '\n' && ch != EOF)
	{
		fflush(stream);
		rd = read(STDIN_FILENO, &ch, 1);
		if (rd == -1)
			return (NULL);
		buff[i] = ch;
		if (i >= size)
		{
			buff = _realloc(buff, sizeof(char) * (size + 1));
			if (buff == NULL)
				return (NULL);
		}
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
