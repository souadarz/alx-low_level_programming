#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if:_there is one or more chars in the string b that is not 0 or 1
 *         _or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, power = 1;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			n += power;
	}
	return (n);
}
