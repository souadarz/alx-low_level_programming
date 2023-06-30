#include "main.h"

/**
 * string_toupper - copies a string
 * @s: string to be copied
 *
 * Description: function that copies a string
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
