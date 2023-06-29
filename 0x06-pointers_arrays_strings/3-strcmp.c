#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination for copy
 * @src: string to be copied
 * @n: the limit of copy
 *
 * Description: function that copies a string
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	if (i > n && !src[i])
		dest[i] = '\0';

	return (dest);
}
