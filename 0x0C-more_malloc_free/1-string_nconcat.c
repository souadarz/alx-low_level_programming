#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: seconde string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: pointer should point to a newly allocated space in memory,
 *         which contains the contents of s1, followed by the first
 *         n bytes of s2,and null terminated. or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, length2 = 0, length1 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	size = length1 + n + 1;

	if (n >= length2)
		size = length1 + length2 + 1;

	s3 = malloc(sizeof(char) * size);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0 ; j <= n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
