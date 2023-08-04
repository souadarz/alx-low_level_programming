#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary
 *                  number to an unsigned int.
 * @b: pointer to the string of number to be converted
 * Return: the converted number, or 0 if:
 * -there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, power = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1') 
			n += power;
	}
	return (n);
}
