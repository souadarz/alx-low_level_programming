#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: seconde string
 * @n: number of bytes to be using from src(seconde string)
 *
 * Description: function that concatenates two strings
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{

		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
