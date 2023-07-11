#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: a pointer to a new string which is a duplicate of the string str,
 *         otherwise NULL
 */

char *_strdup(char *str)
{
	int i, size, length = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	size = length + 1;

	string = malloc(sizeof(char) * size);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		string[i] = str[i];
	}
	return (string);
}
