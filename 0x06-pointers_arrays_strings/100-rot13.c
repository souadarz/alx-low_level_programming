#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to be encoded
 *
 * Description:  function that encodes a string into rot13
 * Return: char
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{	
		for (i = 0; ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z')); i++)
		{
			if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			{
				s[i] += 'a' - 'n';
				break;
			}
			s[i] -= 'a' - 'n';
			break;
		}
	}
	return (s);
}
