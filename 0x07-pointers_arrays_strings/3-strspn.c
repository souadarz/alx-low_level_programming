#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: substring
 *
 * Description: function that gets the length of a prefix substring
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			return (n);
	}
	return (n);
}
