#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the seconde string
 *
 * Description: function that compares two strings
 * Return: 0 if both the strings are the same,
 * negative int if s1 < s2, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	}

	return (0);
}
