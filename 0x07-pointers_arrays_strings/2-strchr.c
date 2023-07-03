#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @c: character to be located
 * @s: input string
 *
 * Description: function that locates a character in a string
 * Return: char if c found, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	char *t;

	t = s;

	while (*t != '\0')
	{
		if (*t == c)
			return (t);
		t++;
	}
	return (NULL);
}
